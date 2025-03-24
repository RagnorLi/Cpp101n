/**
 * @file containers.cpp
 * @author ragnor
 * @date 2025/03/24
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include "containers.h"
#include "ch_runner.h"

#include <iostream>

namespace ch14 {
    void run() {
        std::cout << "Running Chapter 14...\n";

        // 创建菜单系统
        std::cout << "1. 容器分类-序列容器\n";
        std::cout << "2. 容器分类-关联容器\n";
        std::cout << "3. 容器分类-容器适配器\n";
        std::cout << "4. 容器接口-通用操作\n";
        std::cout << "5. 容器接口-迭代器操作\n";
        std::cout << "6. 容器接口-元素访问\n";
        std::cout << "7. 容器操作-修改\n";
        std::cout << "8. 容器操作-查找与计数\n";
        std::cout << "9. 容器操作-容量管理\n";
        std::cout << "10. 容器实现细节-内存模型\n";
        std::cout << "11. 容器实现细节-迭代器类型\n";
        std::cout << "12. 容器实现细节-元素存储\n";
        std::cout << "13. 现代C++容器特性-Cpp11增强\n";
        std::cout << "14. 现代C++容器特性-Cpp17增强\n";
        std::cout << "15. 现代C++容器特性-Cpp20增强\n";
        std::cout << "16. 性能-时间复杂度\n";
        std::cout << "17. 性能-空间开销\n";
        std::cout << "18. 性能-混存友好性\n";
        std::cout << "19. 容器选择-指南\n";
        std::cout << "20. 容器选择-陷阱\n";
        std::cout << "21. 容器选择-优化技巧\n";

        int choice;
        std::cout << "选择一个主题 (1-21): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                containerClassification_sequence();
                break;
            case 2:
                containerClassification_associative();
                break;
            case 3:
                containerClassification_adaptors();
                break;
            case 4:
                containerInterfaces_commonOperations();
                break;
            case 5:
                containerInterfaces_iteratorOperations();
                break;
            case 6:
                containerInterfaces_elementAccess();
                break;
            case 7:
                containerOperations_modify();
                break;
            case 8:
                containerOperations_lookupAndCounting();
                break;
            case 9:
                containerOperations_capacityMgnt();
                break;
            case 10:
                containerImplDetails_memoryModels();
                break;
            case 11:
                containerImplDetails_IteratorCategories();
                break;
            case 12:
                containerImplDetails_elementStorage();
                break;
            case 13:
                modernCppContainerFeatures_cpp11Enhancements();
                break;
            case 14:
                modernCppContainerFeatures_cpp17Enhancements();
                break;
            case 15:
                modernCppContainerFeatures_cpp20Enhancements();
                break;
            case 16:
                performance_timeComplexity();
                break;
            case 17:
                performance_spaceOverhead();
                break;
            case 18:
                performance_cacheFriendliness();
                break;
            case 19:
                containerSelection_guidelines();
                break;
            case 20:
                containerSelection_pitfalls();
                break;
            case 21:
                containerSelection_optimization();
                break;
            default:
                std::cout << "无效选择\n";
        }
    }

    void containerClassification_sequence() {
        std::cout << "ch14 containerClassification_sequence start";
    }
    
    void containerClassification_associative() {
        std::cout << "ch14 containerClassification_associative start";
    }
    
    void containerClassification_adaptors() {
        std::cout << "ch14 containerClassification_adaptors start";
    }
    
    void containerInterfaces_commonOperations() {
        std::cout << "ch14 containerInterfaces_commonOperations start";
    }
    
    void containerInterfaces_iteratorOperations() {
        std::cout << "ch14 containerInterfaces_iteratorOperations start";
    }
    
    void containerInterfaces_elementAccess() {
        std::cout << "ch14 containerInterfaces_elementAccess start";
    }
    
    void containerOperations_modify() {
        std::cout << "ch14 containerOperations_modify start";
    }
    
    void containerOperations_lookupAndCounting() {
        std::cout << "ch14 containerOperations_lookupAndCounting start";
    }
    
    void containerOperations_capacityMgnt() {
        std::cout << "ch14 containerOperations_capacityMgnt start";
    }
    
    void containerImplDetails_memoryModels() {
        std::cout << "ch14 containerImplDetails_memoryModels start";
    }
    
    void containerImplDetails_IteratorCategories() {
        std::cout << "ch14 containerImplDetails_IteratorCategories start";
    }
    
    void containerImplDetails_elementStorage() {
        std::cout << "ch14 containerImplDetails_elementStorage start";
    }
    
    void modernCppContainerFeatures_cpp11Enhancements() {
        std::cout << "ch14 modernCppContainerFeatures_cpp11Enhancements start";
    }
    
    void modernCppContainerFeatures_cpp17Enhancements() {
        std::cout << "ch14 modernCppContainerFeatures_cpp17Enhancements start";
    }
    
    void modernCppContainerFeatures_cpp20Enhancements() {
        std::cout << "ch14 modernCppContainerFeatures_cpp20Enhancements start";
    }
    
    void performance_timeComplexity() {
        std::cout << "ch14 performance_timeComplexity start";
    }
    
    void performance_spaceOverhead() {
        std::cout << "ch14 performance_spaceOverhead start";
    }
    
    void performance_cacheFriendliness() {
        std::cout << "ch14 performance_cacheFriendliness start";
    }
    
    void containerSelection_guidelines() {
        std::cout << "ch14 containerSelection_guidelines start";
    }
    
    void containerSelection_pitfalls() {
        std::cout << "ch14 containerSelection_pitfalls start";
    }
    
    void containerSelection_optimization() {
        std::cout << "ch14 containerSelection_optimization start";
    }
    

}

// 自动注册
REGISTER_CHAPTER(ch14, ch14::run);