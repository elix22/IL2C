using System;
using System.Runtime.CompilerServices;

namespace IL2C.ILConverters
{
    [TestCase(true, "Boolean", 123, 45, 6, false)]
    [TestCase(false, "Boolean", 123, 45, 6, true)]
    [TestCase((byte)(byte.MaxValue - 1), "Byte", 123, 45, 6, byte.MaxValue)]
    [TestCase((short)(short.MaxValue - 1), "Int16", 123, 45, 6, short.MaxValue)]
    [TestCase(int.MaxValue - 1, "Int32", 123, 45, 6, int.MaxValue)]
    [TestCase(long.MaxValue - 1, "Int64", 123, 45, 6, long.MaxValue)]
    [TestCase((sbyte)(sbyte.MaxValue - 1), "SByte", 123, 45, 6, sbyte.MaxValue)]
    [TestCase((ushort)(ushort.MaxValue - 1), "UInt16", 123, 45, 6, ushort.MaxValue)]
    [TestCase(uint.MaxValue - 1, "UInt32", 123, 45, 6, uint.MaxValue)]
    [TestCase(ulong.MaxValue - 1, "UInt64", 123, 45, 6, ulong.MaxValue)]
    [TestCase(int.MaxValue - 1, "IntPtr", 123, 45, 6, int.MaxValue)]
    [TestCase(uint.MaxValue - 1, "UIntPtr", 123, 45, 6, uint.MaxValue)]
    [TestCase((float)((double)123.45f + (double)3.14159274f), "Single", 123, 45, 6, 123.45f)]
    [TestCase(123.45 + 3.1415926535897931, "Double", 123, 45, 6, 123.45)]
    [TestCase('B', "Char", 123, 45, 6, 'A')]
    [TestCase("ABCD", "String", 123, 45, 6, "ABC")]
    public sealed class Ldarg_3
    {
        [MethodImpl(MethodImplOptions.ForwardRef)]
        public static extern bool Boolean(int arg0, int arg1, int arg2, bool value);

        [MethodImpl(MethodImplOptions.ForwardRef)]
        public static extern byte Byte(int arg0, int arg1, int arg2, byte num);

        [MethodImpl(MethodImplOptions.ForwardRef)]
        public static extern short Int16(int arg0, int arg1, int arg2, short num);

        [MethodImpl(MethodImplOptions.ForwardRef)]
        public static extern int Int32(int arg0, int arg1, int arg2, int num);

        [MethodImpl(MethodImplOptions.ForwardRef)]
        public static extern long Int64(int arg0, int arg1, int arg2, long num);

        [MethodImpl(MethodImplOptions.ForwardRef)]
        public static extern sbyte SByte(int arg0, int arg1, int arg2, sbyte num);

        [MethodImpl(MethodImplOptions.ForwardRef)]
        public static extern ushort UInt16(int arg0, int arg1, int arg2, ushort num);

        [MethodImpl(MethodImplOptions.ForwardRef)]
        public static extern uint UInt32(int arg0, int arg1, int arg2, uint num);

        [MethodImpl(MethodImplOptions.ForwardRef)]
        public static extern ulong UInt64(int arg0, int arg1, int arg2, ulong num);

        [MethodImpl(MethodImplOptions.ForwardRef)]
        public static extern IntPtr IntPtr(int arg0, int arg1, int arg2, IntPtr num);

        [MethodImpl(MethodImplOptions.ForwardRef)]
        public static extern UIntPtr UIntPtr(int arg0, int arg1, int arg2, UIntPtr num);

        [MethodImpl(MethodImplOptions.ForwardRef)]
        public static extern float Single(int arg0, int arg1, int arg2, float num);

        [MethodImpl(MethodImplOptions.ForwardRef)]
        public static extern double Double(int arg0, int arg1, int arg2, double num);

        [MethodImpl(MethodImplOptions.ForwardRef)]
        public static extern char Char(int arg0, int arg1, int arg2, char ch);

        [MethodImpl(MethodImplOptions.ForwardRef)]
        public static extern string String(int arg0, int arg1, int arg2, string v);
    }
}
