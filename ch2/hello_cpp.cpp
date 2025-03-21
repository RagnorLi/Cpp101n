/**
 * @file hello_cpp.cpp
 * @author ragnor
 * @date 2025/3/18
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include "hello_cpp.h"
#include "ch_runner.h"
#include "statement/statementImpl.h"

#include <iostream>

namespace ch2 {
    void run() {
        std::cout << "Running Chapter 2...\n";

        // 创建菜单系统
        std::cout << "1. 计算机程序中的语句是什么？\n";
        std::cout << "2. 计算机程序中的表达式是什么？\n";
        std::cout << "3. 单行注释与多行注释\n";
        std::cout << "4. C++程序的5要素\n";
        std::cout << "5. C++视角下的内存模型\n";
        std::cout << "6. C++视角下的OOP\n";
        std::cout << "7. C++中的变量类型族谱？\n";
        std::cout << "8. 程序跟外部沟通的桥梁iostream\n";
        std::cout << "9. C++中的Keywords\n";
        std::cout << "10. C++开发的Naming艺术\n";
        std::cout << "11. C++编码时的美妆技巧\n";
        std::cout << "12. C++中的运算符operators族谱\n";
        std::cout << "13. C++中Return遇见Side Effect\n";


        int choice;
        std::cout << "选择一个主题 (1-13): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                statement();
                break;
            case 2:
                expression();
                break;
            case 3:
                comments();
                break;
            case 4:
                programs();
                break;
            case 5:
                memory();
                break;
            case 6:
                object();
                break;
            case 7:
                variables();
                break;
            case 8:
                iostream();
                break;
            case 9:
                keywords();
                break;
            case 10:
                naming();
                break;
            case 11:
                code_style();
                break;
            case 12:
                operators();
                break;
            case 13:
                return_sideeffect();
                break;
            default:
                std::cout << "无效选择\n";
        }
    }

    void statement() {
        std::cout << "ch2 statement start";
        statementImpl:enter();
    }

    void expression() {
        std::cout << "ch2 expression start";
    }
    void comments() {
        std::cout << "ch2 comments start";
    }
    void programs() {
        std::cout << "ch2 programs start";
    }
    void memory() {
        std::cout << "ch2 memory start";
    }
    void object() {
        std::cout << "ch2 object start";
    }
    void variables() {
        std::cout << "ch2 variables start";
    }
    void iostream() {
        std::cout << "ch2 iostream start";
    }
    void keywords() {
        std::cout << "ch2 keywords start";
    }
    void naming() {
        std::cout << "ch2 naming start";
    }
    void code_style() {
        std::cout << "ch2 whitspace_newlines start";
    }
    void operators() {
        std::cout << "ch2 operators start";
    }
    void return_sideeffect() {
        std::cout << "ch2 return_sideeffect start";
    }


}


// 自动注册
REGISTER_CHAPTER(ch2, ch2::run);