/**
 * @file enjoy.cpp
 * @author ragnor
 * @date 2025/3/18
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include "enjoy.h"
#include <iostream>
#include "ch_runner.h"

namespace ch1 {


    void run() {
         std::cout << "Running Chapter 1...\n";

         // 创建菜单系统
         std::cout << "1. C++学习之旅概述\n";
         std::cout << "2. 为什么需要汇编语言\n";
         std::cout << "3. 从C++到可执行文件的过程\n";
         std::cout << "4. 不同类型的编译器\n";
         std::cout << "5. CMakeLists文件详解\n";

         int choice;
         std::cout << "选择一个主题 (1-5): ";
         std::cin >> choice;

         switch (choice) {
             case 1:
                 journey();
                 break;
             case 2:
                 whyAssembly();
                 break;
             case 3:
                 fromCppToExecute();
                 break;
             case 4: multiTypesOfCompiler(); break;
             case 5: cMakeLists();
                 break;
             default:
                 std::cout << "无效选择\n";
         }
    }

    void journey() {
        // 真实的C++代码实现
        std::string welcome = "欢迎开始C++学习之旅!";
        std::cout << welcome << std::endl;

        /* @card-begin: C++学习之旅
        * @card-description: 开始学习C++的第一步是理解编译过程
        *
        * @card-code: cpp: 简单的C++程序
        * #include <iostream>
        *
        * int main() {
        *     std::cout << "Hello, Modern C++!" << std::endl;
        *     return 0;
        * }
        * @card-end
        */
    }

    void whyAssembly() {
        // 真实的C++代码
        std::vector<std::string> reasons = {
        "模块化设计",
        "工程效率",
        "优化机会"
        };

        for (const auto& reason : reasons) {
            std::cout << "原因: " << reason << std::endl;
        }

        /* @card-begin: 汇编的作用
        * @card-description: 编译器将C++代码翻译为汇编语言的关键原因
        *
        * @card-code: cpp: 源代码
        * int main() {
        *     int x = 42;
        *     return x;
        * }
        *
        * @card-code: asm: 生成的汇编代码
        * main:
        *     push    rbp
        *     mov     rbp, rsp
        *     mov     DWORD PTR [rbp-4], 42
        *     mov     eax, DWORD PTR [rbp-4]
        *     pop     rbp
        *     ret
        * @card-end
        */
    }

    void fromCppToExecute() {
        // 实际处理代码...
        std::string command = "g++ -o program main.cpp";
        std::cout << "执行编译命令: " << command << std::endl;

        /* @card-begin: 编译流程
        * @card-description: 从源代码到可执行文件的完整过程
        *
        * @card-code: cpp: 第1步 - 预处理
        * // 原始代码
        * #include <iostream>
        * #define MAX 100
        *
        * // 预处理后
        * // <iostream>的全部内容展开
        * // MAX被替换为100
        *
        * @card-code: asm: 第2步 - 编译为汇编
        * .file "source.cpp"
        * .section .text
        * .globl main
        * main:
        *     // 汇编代码...
        *
        * @card-code: text: 第3步 - 汇编为目标文件
        * 7F 45 4C 46 02 01 01 00 // 目标文件二进制
        *
        * @card-code: bash: 第4步 - 链接为可执行文件
        * $ g++ -o program main.o
        * $ file program
        * program: ELF 64-bit LSB executable
        * @card-end
        */
    }

    void multiTypesOfCompiler() {
        // 编译器对比代码
        std::cout << "不同编译器的特点与优势" << std::endl;

        /* @card-begin: 编译器比较
        * @card-description: GCC、Clang和MSVC三大主流C++编译器的对比
        *
        * @card-code: bash: GCC编译器
        * # Linux/macOS上使用GCC
        * g++ -std=c++17 -Wall -O2 main.cpp -o program
        *
        * # 支持众多平台和标准
        * # 强大的优化选项
        *
        * @card-code: bash: Clang编译器
        * # 使用Clang编译
        * clang++ -std=c++17 -Wall main.cpp -o program
        *
        * # 友好的错误提示
        * # 与LLVM优化系统集成
        *
        * @card-code: batch: MSVC编译器
        * REM Windows上使用MSVC
        * cl /std:c++17 /W4 /EHsc main.cpp
        *
        * REM 与Windows平台深度集成
        * REM Visual Studio IDE支持
        * @card-end
        */
    }

    void cMakeLists() {

    }




}

// 自动注册
REGISTER_CHAPTER(ch1, ch1::run);