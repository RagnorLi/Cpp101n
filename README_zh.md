# 📚 C++ 学习之旅

<div align="center">

![C++版本](https://img.shields.io/badge/C++-17-blue.svg?style=flat&logo=c%2B%2B)
![许可证](https://img.shields.io/github/license/yourusername/cpp-learning-journey)
![星标](https://img.shields.io/github/stars/yourusername/cpp-learning-journey?style=social)
[![欢迎PR](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)](./CONTRIBUTING.md)

**通过可执行章节学习C++的革命性方法**  
*基于learncpp.com的内容，强化实践与动手编码*

[English](./README.md) | [中文](./README_zh.md)

[核心特性](#-核心特性) •
[快速开始](#-快速开始) •
[项目展示](#-项目展示) •
[架构设计](#-架构设计) •
[参与贡献](#-参与贡献) •
[发展规划](#-发展规划)

<div align="center">
  <img src="logo.svg" alt="C++ Learning Journey Banner" width="250" height="250">
</div>

</div>

## 🌟 为什么选择本项目？

厌倦了纯理论没有实践的C++教程？**C++学习之旅**将每个概念转化为可执行的章节，让您能够按照自己的节奏运行、修改和掌握。

> "我从困惑于指针到几周内就能实现复杂数据结构！" — 一位感激的学生

**适合人群：**
- 🎓 学习C++的计算机科学学生
- 💼 转向C++开发的专业人士
- 👨‍💻 希望获得结构化练习的自学开发者
- 📝 准备编程挑战的技术面试者

## 🚀 核心特性

- **🧩 模块化学习路径**：每个概念都被隔离在可单独运行的章节中
- **🔄 循序渐进的复杂度**：从基础到高级技术逐步构建技能
- **🛠️ 交互式示例**：不仅仅是阅读代码，更是运行和实验的代码
- **🧪 内置挑战**：通过递增难度的练习测试您的理解
- **📊 可视化内存模型**：直观了解C++中内存管理的实际工作方式
- **🧠 间隔重复**：概念在章节间战略性重现，加强记忆

## ⚡ 快速开始

```bash
# 克隆仓库
git clone https://github.com/yourusername/cpp-learning-journey.git
cd cpp-learning-journey

# 构建项目
mkdir build && cd build
cmake ..
make

# 列出所有章节
./cpp_journey

# 运行特定章节
./cpp_journey chapter01  # 基础C++语法
./cpp_journey chapter07  # 指针与引用
./cpp_journey chapter12  # 高级类与面向对象编程
```

### IDE设置 (CLion)
1. 在CLion中打开项目
2. 在Program Arguments中添加章节名（如`chapter03`）
3. 点击Run或Debug来探索该章节

## 📋 学习路径

| 章节 | 主题 | 涵盖的概念 |
|---------|-------|------------------|
| 01 | C++基础 | 变量、类型、控制流 |
| 02 | 函数与作用域 | 参数传递、返回值 |
| 03 | 数组与字符串 | 迭代、操作、C与C++对比 |
| 04 | 指针可视化 | 内存模型、指针算术 |
| ... | ... | ... |
| 17 | 现代C++ | 移动语义、智能指针、RAII |

## 🎯 项目展示

<div align="center">
<img src="https://i.imgur.com/K8xH30R.png" alt="内存可视化" width="400">
<p><em>章节4中的可视化内存布局：指针可视化</em></p>
</div>

```cpp
// 来自章节12：智能指针实战
auto resource = std::make_unique<Resource>("precious");
std::cout << "资源创建成功：" << resource->getName() << std::endl;
auto shared = std::make_shared<DataBlock>(1024);
std::weak_ptr<DataBlock> observer = shared;
// 看看shared超出作用域后会发生什么！
```

## 🏗️ 架构设计

本项目采用独特的章节运行器系统，使每个模块独立存在的同时保持统一的结构：

```
cpp-learning-journey/
├── CMakeLists.txt
├── main.cpp                # 统一入口
├── chapter_runner.h/cpp    # 协调管理器
├── chapters/
│   ├── chapter01/          # 每个章节都是独立的
│   │   ├── chapter01.h
│   │   ├── chapter01.cpp
│   │   └── exercises/      # 每个概念的练习题
│   ├── chapter02/
│   │   ├── chapter02.h
│   │   ├── chapter02.cpp
│   │   └── ...
│   └── ...
└── utils/                  # 共享可视化工具
```

### 设计原则

- **零依赖**：每个章节只依赖标准库
- **编译器兼容性**：兼容GCC、Clang和MSVC
- **渐进式揭示**：复杂主题基于前面的知识构建
- **视觉反馈**：为抽象概念提供控制台可视化

## 👥 参与贡献

您的贡献将使这个学习之旅更加精彩！以下是您可以帮助的方式：

- 添加涵盖C++主题的新章节
- 改进现有示例或解释
- 修复错误或增强章节运行器
- 添加内存/性能可视化
- 将注释翻译成其他语言

详细指南请参阅[CONTRIBUTING.md](./CONTRIBUTING.md)。

## 🗺️ 发展规划

- [ ] 完成全部25个核心章节
- [ ] 每个部分后添加互动测验
- [ ] 创建堆/栈内存使用可视化工具
- [ ] 开发集成的基准测试工具
- [ ] 支持C++20概念和模块

## 📜 许可证

本项目采用MIT许可证 - 详情请参阅[LICENSE](./LICENSE)文件。