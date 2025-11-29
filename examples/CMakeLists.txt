# examples/CMakeLists.txt

# 创建示例可执行文件
add_executable(MagicEngineExample
  main.cpp
)

# 链接引擎库
target_link_libraries(MagicEngineExample PRIVATE MagicEngine)

message(STATUS "MagicEngine example configured")