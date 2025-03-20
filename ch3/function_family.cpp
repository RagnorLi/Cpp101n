/**
 * @file function_family.cpp
 * @author ragnor
 * @date 2025/03/20
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include "function_family.h"
#include "ch_runner.h"

#include <iostream>

namespace ch3 {
    void run() {
        std::cout << "Running Chapter 3...\n";

        // 创建一个简单的菜单系统
        std::cout << "1. groupByDefinitionScope\n";
        std::cout << "2. groupBySpecialUseage\n";
        std::cout << "3. groupByWithConstraints\n";
        std::cout << "4. groupByPolymorphicKey\n";
        std::cout << "5. groupByGenericProjection\n";
        std::cout << "6. groupByModernLambda\n";
        std::cout << "7. groupByMemoryAware\n";

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