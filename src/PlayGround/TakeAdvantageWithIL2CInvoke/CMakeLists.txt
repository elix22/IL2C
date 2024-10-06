cmake_minimum_required(VERSION 3.0)
project(TakeAdvantageWithIL2CInvoke)


set(CMAKE_CXX_STANDARD 20)

if(CMAKE_SYSTEM_NAME STREQUAL "Windows")
elseif(CMAKE_SYSTEM_NAME STREQUAL "Linux")
elseif(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++ -x objective-c++")
endif()
set(CMAKE_SYSTEM_NAME Darwin)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pipe -g2 -Wall -Werror -Wstrict-prototypes -Wno-unused -fdata-sections -ffunction-sections -pthread -D__APPLE__")
add_definitions(-D_LIB)

file(GLOB_RECURSE IL2C_RUNTIME_SRCS "../../IL2C.Runtime/src/*.c")

file(GLOB_RECURSE IL2C_APP_SRCS "bin/Debug/net6.0/il2c/src/*.c")

add_executable(TakeAdvantageWithIL2CInvoke ${IL2C_RUNTIME_SRCS} ${IL2C_APP_SRCS} bin/Debug/net6.0/il2c/TakeAdvantageWithIL2CInvoke.c)

target_include_directories(TakeAdvantageWithIL2CInvoke PRIVATE ../../IL2C.Runtime/include ../../IL2C.Runtime/src bin/Debug/net6.0/il2c/include bin/Debug/net6.0/il2c/src)

target_link_libraries(TakeAdvantageWithIL2CInvoke PRIVATE "-framework Cocoa")

