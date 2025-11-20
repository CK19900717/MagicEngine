# MyGameEngine - 自研 3D 游戏引擎

![引擎演示](docs/screenshots/demo.gif)

> **注意**: 这是一个学习项目，用于深入理解游戏引擎开发原理

## 🎯 项目简介

**MyGameEngine** 是一个从零开始构建的 3D 游戏引擎，主要目标是通过实践学习计算机图形学、实时渲染和游戏架构设计。

## ✨ 当前特性

### ✅ 已实现
- **渲染系统**: OpenGL 4.5 渲染管线
- **场景管理**: 基于组件的实体系统 (ECS)
- **资源管理**: 纹理、着色器、模型加载
- **输入系统**: 键盘、鼠标、游戏手柄支持
- **基础数学**: 使用 GLM 的向量、矩阵、四元数

### 🔄 开发中  
- 物理碰撞检测
- 骨骼动画系统
- 粒子效果系统

### 📋 计划中
- 后处理效果链
- 场景序列化
- 可视化编辑器

## 🛠️ 技术栈

| 组件     | 技术选择   | 状态 |
| -------- | ---------- | ---- |
| 编程语言 | C++17      | ✅    |
| 图形 API | OpenGL 4.5 | ✅    |
| 窗口管理 | SDL3       | ✅    |
| 数学库   | GLM        | ✅    |
| 构建系统 | CMake      | ✅    |
| 图像加载 | stb_image  | ✅    |

## 项目结构
MyGameEngine/
├── src/               # 源代码
│   ├── core/         # 核心系统 (引擎、应用)
│   ├── graphics/     # 渲染系统
│   ├── math/         # 数学库
│   ├── resources/    # 资源管理
│   └── platform/     # 平台抽象
├── include/          # 公共头文件
├── examples/         # 使用示例
├── docs/            # 文档
├── third_party/     # 第三方库
└── assets/          # 测试资源
## 🚀 快速开始

### 环境要求
- **操作系统**: Windows 10+, macOS 10.15+, 或 Linux
- **编译器**: GCC 9+, Clang 10+, 或 MSVC 2019+
- **CMake**: 3.15+
- **显卡**: 支持 OpenGL 4.5

### 构建步骤

```bash
# 1. 克隆仓库
git clone https://github.com/你的用户名/MyGameEngine.git
cd MyGameEngine

# 2. 创建构建目录
mkdir build && cd build

# 3. 配置项目
cmake ..

# 4. 编译
cmake --build . --config Release

# 5. 运行示例
./bin/MyGameEngine