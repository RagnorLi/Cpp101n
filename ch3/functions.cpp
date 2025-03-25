/**
 * @file function_family.cpp
 * @author ragnor
 * @date 2025/03/20
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include "functions.h"
#include "ch_runner.h"

#include <iostream>

namespace ch3 {
    void run() {
        std::cout << "Running Chapter 3...\n";

        // 创建菜单系统
        std::cout << "1. 基于定义位置的函数分类\n";
        std::cout << "2. 基于特殊用途的函数分类\n";
        std::cout << "3. 基于约束和修饰的函数分类\n";
        std::cout << "4. 基于多态性的函数分类\n";
        std::cout << "5. 基于模版和泛型编程的函数分类\n";
        std::cout << "6. 基于现代C++的函数特性\n";
        std::cout << "7. 基于内存和执行模型的函数分类\n";

        int choice;
        std::cout << "选择一个主题 (1-7): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                groupByDefinitionScope();
                break;
            case 2:
                groupBySpecialUseage();
                break;
            case 3:
                groupByWithConstraints();
                break;
            case 4:
                groupByPolymorphicKey();
                break;
            case 5:
                groupByGenericProjection();
                break;
            case 6:
                groupByModernLambda();
                break;
            case 7:
                groupByMemoryAware();
                break;
            default:
                std::cout << "无效选择\n";
        }
    }

    void groupByDefinitionScope() {
        std::cout << "ch3 groupByDefinitionScope start";
    }
    
    void groupBySpecialUseage() {
        std::cout << "ch3 groupBySpecialUseage start";
    }
    
    void groupByWithConstraints() {
        std::cout << "ch3 groupByWithConstraints start";
    }
    
    void groupByPolymorphicKey() {
        std::cout << "ch3 groupByPolymorphicKey start";
    }
    
    void groupByGenericProjection() {
        std::cout << "ch3 groupByGenericProjection start";
    }
    
    void groupByModernLambda() {
        std::cout << "ch3 groupByModernLambda start";
    }
    
    void groupByMemoryAware() {
        std::cout << "ch3 groupByMemoryAware start";
    }
    

}

// 自动注册
REGISTER_CHAPTER(ch3, ch3::run);