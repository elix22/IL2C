#!/bin/sh

export Platform=`uname -m`

if [ $# != 1 ]; then
  Configuration=Debug
else
  Configuration=$1
fi

cd src/IL2C.Runtime

rm -rf build.cmake

if [ ! -d lib ]; then
  mkdir lib
fi

mkdir build.cmake
cd build.cmake

# ================================================================================

echo ""
echo "///////////////////////////////////////////////"
echo '// Build IL2C.Runtime (xcode-macos-$Platform-$Configuration)'
echo ""

mkdir xcode-macos-$Platform-$Configuration
cd xcode-macos-$Platform-$Configuration

cmake -G "Xcode" -DCMAKE_TOOLCHAIN_FILE=../../cmake/xcode-macos.cmake -DPLATFORM=$Platform -DCONFIGURATION=$Configuration ../..
cmake --build .

cd ..

cd ..
cd ..
