cmake_minimum_required(VERSION 3.25)
project(MagicEngine VERSION 0.1.0 LANGUAGES CXX C)

# 启用现代 CMake 特性
# include_guard(GLOBAL)

# 设置 C++ 标准 - 面向未来
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 针对 VS2026 的特定优化
# if(MSVC_VERSION GREATER_EQUAL 2000) # 假设 VS2026 版本号
# set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
# add_compile_options(/permissive- /Zc:__cplusplus /utf-8)
# endif()

# 输出目录设置
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# 现代编译警告设置
# if(MSVC)
# add_compile_options(/W4 /WX /sdl)
# else()
# add_compile_options(-Wall -Wextra -Wpedantic -Werror -Wno-deprecated)
# endif()

# 构建类型配置
set(CMAKE_CONFIGURATION_TYPES "Debug;Release;RelWithDebInfo" CACHE STRING "" FORCE)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
endif()

# 包管理器集成 (假设 VS2026 会有更好的包管理)
# find_package(OpenGL REQUIRED)

# 包含子目录
# add_subdirectory(third_party)
add_subdirectory(src)

# add_subdirectory(examples)

# 安装配置
# include(GNUInstallDirs)
# install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
# install(DIRECTORY assets/ DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/MyGameEngine)

# CPack 配置 (可选)
# include(CPack)