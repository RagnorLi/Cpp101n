/**
 * @file variable_life.cpp
 * @author ragnor
 * @date 2025/03/21
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include "variable_life.h"
#include "ch_runner.h"

#include <iostream>

namespace ch9 {
    void run() {
        std::cout << "Running Chapter 9...\n";

        // 创建菜单系统
        std::cout << "1. 变量生命周期阶段-声明\n";
        std::cout << "2.变量生命周期阶段-内存分配\n";
        std::cout << "3. 变量生命周期阶段-初始化\n";
        std::cout << "4. 变量生命周期阶段-使用\n";
        std::cout << "5. 变量生命周期阶段-销毁\n";
        std::cout << "6. 不同变量类型的生命周期路径-自动变量\n";
        std::cout << "7. 不同变量类型的生命周期路径-静态局部变量\n";
        std::cout << "8. 不同变量类型的生命周期路径-全局/命名空间变量\n";
        std::cout << "9. 不同变量类型的生命周期路径-动态分配变量\n";
        std::cout << "10. 不同变量类型的生命周期路径-智能指针管理对象\n";
        std::cout << "11. 最佳实践-RAII原则\n";
        std::cout << "12. 最佳实践-智能指针优先级\n";
        std::cout << "13. 最佳实践-移动语义优化\n";
        std::cout << "14. 最佳实践-初始化\n";
        std::cout << "15. 最佳实践-线程安全\n";

        int choice;
        std::cout << "选择一个主题 (1-15): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                variableLifeStage_declaration();
                break;
            case 2:
                variableLifeStage_memoryAllocation();
                break;
            case 3:
                variableLifeStage_init();
                break;
            case 4:
                variableLifeStage_work();
                break;
            case 5:
                variableLifeStage_destroy();
                break;
            case 6:
                differentVariableLifePath_auto();
                break;
            case 7:
                differentVariableLifePath_staticLocal();
                break;
            case 8:
                differentVariableLifePath_global();
                break;
            case 9:
                differentVariableLifePath_dynamic();
                break;
            case 10:
                differentVariableLifePath_smartPointer();
                break;
            case 11:
                bestPractice_RAII();
                break;
            case 12:
                bestPractice_smartPointer();
                break;
            case 13:
                bestPractice_move();
                break;
            case 14:
                bestPractice_init();
                break;
            case 15:
                bestPractice_threadSafety();
                break;
            default:
                std::cout << "无效选择\n";
        }
    }

    void variableLifeStage_declaration() {
        std::cout << "ch9 variableLifeStage_declaration start";
    }
    
    void variableLifeStage_memoryAllocation() {
        std::cout << "ch9 variableLifeStage_memoryAllocation start";
    }
    
    void variableLifeStage_init() {
        std::cout << "ch9 variableLifeStage_init start";
    }
    
    void variableLifeStage_work() {
        std::cout << "ch9 variableLifeStage_work start";
    }
    
    void variableLifeStage_destroy() {
        std::cout << "ch9 variableLifeStage_destroy start";
    }
    
    void differentVariableLifePath_auto() {
        std::cout << "ch9 differentVariableLifePath_auto start";
    }
    
    void differentVariableLifePath_staticLocal() {
        std::cout << "ch9 differentVariableLifePath_staticLocal start";
    }
    
    void differentVariableLifePath_global() {
        std::cout << "ch9 differentVariableLifePath_global start";
    }
    
    void differentVariableLifePath_dynamic() {
        std::cout << "ch9 differentVariableLifePath_dynamic start";
    }
    
    void differentVariableLifePath_smartPointer() {
        std::cout << "ch9 differentVariableLifePath_smartPointer start";
    }
    
    void bestPractice_RAII() {
        std::cout << "ch9 bestPractice_RAII start";
    }
    
    void bestPractice_smartPointer() {
        std::cout << "ch9 bestPractice_smartPointer start";
    }
    
    void bestPractice_move() {
        std::cout << "ch9 bestPractice_move start";
    }
    
    void bestPractice_init() {
        std::cout << "ch9 bestPractice_init start";
    }
    
    void bestPractice_threadSafety() {
        std::cout << "ch9 bestPractice_threadSafety start";
    }
    

}

// 自动注册
REGISTER_CHAPTER(ch9, ch9::run);