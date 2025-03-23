# 📚 C++ Learning Journey

<div align="center">

![C++ Version](https://img.shields.io/badge/C++-20-blue.svg?style=flat&logo=c%2B%2B)
![License](https://img.shields.io/badge/license-MIT-blue)
![Stars](https://img.shields.io/github/stars/RagnorLi/Cpp101n?style=social)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)](./CONTRIBUTING.md)

**Learning C++ from First Principles**  
*Based on learncpp.com content, but clearer, more focused, and systematic*

[English](./README.md) | [中文](./README_zh.md)

[Core Features](#-core-features) •
[Quick Start](#-quick-start) •
[Project Showcase](#-project-showcase) •
[Architecture Design](#-architecture-design) •
[Contributing](#-contributing) •
[Roadmap](#-roadmap)

<div align="center">
  <img src="logo.svg" alt="C++ Learning Journey Banner" width="250" height="250">
</div>

</div>

## 🌟 Why Choose This Project?

If you can't find a *card-based*, *chapter-structured*, *hands-on experiment-oriented* guide that **strictly follows first principles** as its fundamental framework!

> "- Observe the form, dissect the structure, understand the reason, practice the method!" — ragnor.li

**Target Audience:**
- 🎓 Computer Science students learning C++
- 💼 Professionals transitioning to C++ development
- 👨‍💻 Self-taught developers seeking structured practice
- 📝 Technical interview candidates preparing for programming challenges

## 🚀 Core Features

- **🧩 Clarity**: Each chapter's knowledge structure treats functions as first-class citizens, serving as both theory and experiment!
- **🔄 Focus**: Every namespace is like a mind map of interconnected knowledge, capturing both essence and context!
- **🛠️ Systematic**: Every programming language is a means of communication between humans and computers. Cpp101n strips away the commonalities with Python and Java, allowing you to examine different design philosophies from a C++ perspective! Marvel at the battle of ideas from those who came before!
- **🐊 Card-based**: Each chapter automatically generates HTML cards, facilitating team presentations and personal reference!

## ⚡ Quick Start

```bash
# Clone the repository
git clone https://github.com/RagnorLi/Cpp101n.git
cd Cpp101n

# Build the project
mkdir build && cd build
cmake ..
make

# List all chapters
./cPP101n

# Run a specific chapter
./cPP101n chapter01  # Basic C++ syntax
./cPP101n chapter07  # Pointers and references
./cPP101n chapter12  # Advanced classes and OOP
```

### IDE Setup (CLion)
1. Open the project in CLion
2. Add the chapter name (e.g., `chapter03`) in Program Arguments
3. Click Run or Debug to explore the chapter

## 📋 Learning Path

| Chapter | Topic | Concepts Covered | Knowledge Card |
|---------|-------|------------------|----------------|
| 01 | C++ Basics | Variables, Types, Control Flow |a|
| 02 | Functions & Scope | Parameter Passing, Return Values |
| 03 | Arrays & Strings | Iteration, Manipulation, C vs C++ |a|
| 04 | Pointer Visualization | Memory Model, Pointer Arithmetic |a|
| ... | ... | ... | ... |
| 17 | Modern C++ | Move Semantics, Smart Pointers, RAII |a|

## 🎯 Project Showcase

<div align="center">
<img src="https://i.imgur.com/K8xH30R.png" alt="Memory Visualization" width="400">
<p><em>Visualized memory layout from Chapter 4: Pointer Visualization</em></p>
</div>

```cpp
// From Chapter 12: Smart Pointers in Action
auto resource = std::make_unique<Resource>("precious");
std::cout << "Resource created successfully: " << resource->getName() << std::endl;
auto shared = std::make_shared<DataBlock>(1024);
std::weak_ptr<DataBlock> observer = shared;
// See what happens when shared goes out of scope!
```

## 🏗️ Architecture Design

This project employs a unique chapter runner system that allows each module to exist independently while maintaining a unified structure:

```
Cpp101n/
├── CMakeLists.txt
├── main.cpp                # Unified entry point
├── chapter_runner.h/cpp    # Coordination manager
├── chapters/
│   ├── chapter01/          # Each chapter is independent
│   │   ├── chapter01.h
│   │   ├── chapter01.cpp
│   ├── chapter02/
│   │   ├── chapter02.h
│   │   ├── chapter02.cpp
│   │   └── ...
│   └── ...
└── utils/                  # Shared visualization tools
```

### Design Principles

- **Zero Dependencies**: Each chapter relies only on the standard library
- **Compiler Compatibility**: Compatible with GCC, Clang, and MSVC
- **Progressive Disclosure**: Complex topics build upon previous knowledge
- **Visual Feedback**: Console visualizations for abstract concepts

## 👥 Contributing

Your contributions will make this learning journey even better! Here are ways you can help:

- Add new chapters covering C++ topics
- Improve existing examples or explanations
- Fix bugs or enhance the chapter runner
- Add memory/performance visualizations
- Translate comments into other languages

See [CONTRIBUTING.md](./CONTRIBUTING.md) for detailed guidelines.

## 🗺️ Roadmap

- [ ] Complete all 29 core chapters
- [ ] Add interactive quizzes after each section
- [ ] Create heap/stack memory usage visualization tools
- [ ] Develop integrated benchmarking tools
- [ ] Support C++20 concepts and modules

## 📜 License

This project is licensed under the MIT License - see the [LICENSE](./LICENSE) file for details.
```