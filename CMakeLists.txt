# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

#编译器
SET(CMAKE_CXX_COMPILER /Users/huweinan/sghwn2/llvm-project-llvmorg-8.0.1/build/bin/clang++)

#头文件目录
include_directories(/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/ /System/Volumes/Data/Library/Developer/CommandLineTools/usr/include/c++/v1 /Library/Developer/CommandLineTools/SDKs/MacOSX10.15.sdk/usr/include)
include_directories(/Users/huweinan/sghwn2/llvm-project-llvmorg-8.0.1/build/lib/clang/8.0.1/include)



# 项目信息
project (testlint)

# 指定生成目标
add_executable(testlint tt.cpp)
