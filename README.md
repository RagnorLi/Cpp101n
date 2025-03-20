# 📚 C++ Learning Journey

<div align="center">

![C++ Version](https://img.shields.io/badge/C++-17-blue.svg?style=flat&logo=c%2B%2B)
![License](https://img.shields.io/github/license/yourusername/cpp-learning-journey)
![Stars](https://img.shields.io/github/stars/yourusername/cpp-learning-journey?style=social)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)](./CONTRIBUTING.md)

**A revolutionary approach to learning C++ through executable chapters**  
*Based on learncpp.com material, enhanced with practical hands-on code*

[Key Features](#-key-features) •
[Quick Start](#-quick-start) •
[Showcase](#-showcase) •
[Architecture](#-architecture) •
[Contributing](#-contributing) •
[Roadmap](#-roadmap)

<div align="center">
  <img src="logo.svg" alt="C++ Learning Journey Banner" width="250" height="250">
</div>

[English](./README.md) | [中文](./README_zh.md)

</div>

## 🌟 Why This Project?

Tired of C++ tutorials that are all theory and no practice? **C++ Learning Journey** transforms each concept into an executable chapter that you can run, modify, and master at your own pace.

> "I went from struggling with pointers to implementing complex data structures in weeks!" — A Grateful Student

**Perfect for:**
- 🎓 CS students learning C++
- 💼 Professionals transitioning to C++
- 👨‍💻 Self-taught developers wanting structured practice
- 📝 Technical interviewees preparing for coding challenges

## 🚀 Key Features

- **🧩 Modular Learning Path**: Each concept isolated in a separate runnable chapter
- **🔄 Progressive Complexity**: Build skills from fundamentals to advanced techniques
- **🛠️ Interactive Examples**: Not just code to read, but code to run and experiment with
- **🧪 Built-in Challenges**: Test your understanding with increasing difficulty levels
- **📊 Visual Memory Models**: See how memory management actually works in C++
- **🧠 Spaced Repetition**: Concepts reappear strategically across chapters for better retention

## ⚡ Quick Start

```bash
# Clone the repository
git clone https://github.com/yourusername/cpp-learning-journey.git
cd cpp-learning-journey

# Build the project
mkdir build && cd build
cmake ..
make

# List all chapters
./cpp_journey

# Run a specific chapter
./cpp_journey chapter01  # Basic C++ Syntax
./cpp_journey chapter07  # Pointers & References
./cpp_journey chapter12  # Advanced Classes & OOP
```

### IDE Setup (CLion)
1. Open the project in CLion
2. Add chapter name (e.g., `chapter03`) to Program Arguments
3. Click Run or Debug to explore the chapter

## 📋 Learning Path

| Chapter | Topic | Concepts Covered |
|---------|-------|------------------|
| 01 | C++ Fundamentals | Variables, Types, Control Flow |
| 02 | Functions & Scope | Parameter Passing, Return Values |
| 03 | Arrays & Strings | Iteration, Manipulation, C vs C++ |
| 04 | Pointers Visualized | Memory Model, Pointer Arithmetic |
| ... | ... | ... |
| 17 | Modern C++ | Move Semantics, Smart Pointers, RAII |

## 🎯 Showcase

<div align="center">
<img src="https://i.imgur.com/K8xH30R.png" alt="Memory Visualization" width="400">
<p><em>Visual memory layout from Chapter 4: Pointers Visualized</em></p>
</div>




```cpp
// From Chapter 12: Smart Pointers in Action
auto resource = std::make_unique<Resource>("precious");
std::cout << "Resource created: " << resource->getName() << std::endl;
auto shared = std::make_shared<DataBlock>(1024);
std::weak_ptr<DataBlock> observer = shared;
// See what happens when shared goes out of scope!
```

## 🏗️ Architecture

The project employs a unique chapter runner system that allows each module to exist independently while maintaining a cohesive structure:

```
cpp-learning-journey/
├── CMakeLists.txt
├── main.cpp                # Unified entry point
├── chapter_runner.h/cpp    # The magic orchestrator
├── chapters/
│   ├── chapter01/          # Each chapter is self-contained
│   │   ├── chapter01.h
│   │   ├── chapter01.cpp
│   │   └── exercises/      # Practice problems for each concept
│   ├── chapter02/
│   │   ├── chapter02.h
│   │   ├── chapter02.cpp
│   │   └── ...
│   └── ...
└── utils/                  # Shared visualization tools
```

### Design Principles

- **Zero Dependencies**: Each chapter depends only on the standard library
- **Compiler Compatibility**: Works with GCC, Clang, and MSVC
- **Progressive Disclosure**: Complex topics build on previous knowledge
- **Visual Feedback**: Console visualizations for abstract concepts

## 👥 Contributing

Contributions make this learning journey even better! Here's how you can help:

- Add a new chapter covering a C++ topic
- Improve existing examples or explanations
- Fix bugs or enhance the chapter runner
- Add memory/performance visualizations
- Translate comments to other languages

See [CONTRIBUTING.md](./CONTRIBUTING.md) for detailed guidelines.

## 🗺️ Roadmap

- [ ] Complete all 25 core chapters
- [ ] Add interactive quizzes after each section
- [ ] Create memory usage visualizer for heap/stack
- [ ] Develop integrated benchmarking tools
- [ ] Support for C++20 concepts and modules

## 📜 License

This project is licensed under the MIT License - see the [LICENSE](./LICENSE) file for details.