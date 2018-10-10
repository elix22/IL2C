﻿using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Threading.Tasks;

using NUnit.Framework;

namespace IL2C
{
    [TestFixture]
    public sealed class Test
    {
        private static readonly Assembly targetAssembly = typeof(Target).Assembly;
        private static readonly string il2cIncludePath =
            Path.GetFullPath(
                Path.Combine(
                    Path.GetDirectoryName(targetAssembly.Location),
                    "..",
                    "..",
                    "..",
                    "..",
                    "..",
                    "IL2C.Runtime"));

        [Test]
        public Task TestAsync()
        {
            return TestFramework.ExecuteTestAsync(() => Target.ByteMainBody());
        }

       // [Test]
        public async Task SimpleTestAsync()
        {
            var translateContext = new TranslateContext(targetAssembly.Location, false);

            var prepared = AssemblyPreparer.Prepare(
                translateContext, method => method.DeclaringType.FriendlyName == "IL2C.Target");

            var targetMethod =
                translateContext.Assembly.Modules
                .First().Types
                .First(type => type.FriendlyName == "IL2C.Target").DeclaredMethods
                .First(method => method.Name == "ByteMainBody");

            var tw = new StringWriter();
            tw.WriteLine("#include <il2c.h>");
            tw.WriteLine();

            AssemblyWriter.InternalConvertFromMethod(tw, translateContext, prepared, targetMethod, "  ");

            tw.WriteLine();
            tw.WriteLine("#include <stdio.h>");
            tw.WriteLine();
            tw.WriteLine("int main()");
            tw.WriteLine("{");
            tw.WriteLine(string.Format("  auto result = {0}();", targetMethod.CLanguageFunctionName));
            tw.WriteLine(string.Format("  printf(\"%d\", result);"));
            tw.WriteLine(string.Format("  return 0;"));
            tw.WriteLine("}");

            var sourceCode = tw.ToString();

            var result = await GccDriver.CompileAndRunAsync(new StringReader(sourceCode), il2cIncludePath);
            var lines = result.Split(new[] { '\r', '\n' });

            Assert.AreEqual(Target.ByteMainBody().ToString(), lines[0]);
        }
    }
}