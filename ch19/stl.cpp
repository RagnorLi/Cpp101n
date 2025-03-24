/**
 * @file stl.cpp
 * @author ragnor
 * @date 2025/03/24
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include "stl.h"
#include "ch_runner.h"

#include <iostream>

namespace ch19 {
    void run() {
        std::cout << "Running Chapter 19...\n";

        // 创建菜单系统
        std::cout << "1. STL概述-核心组件\n";
        std::cout << "2. STL概述-设计原则\n";
        std::cout << "3. 容器-序列容器\n";
        std::cout << "4. 容器-关联容器\n";
        std::cout << "5. 容器-容器适配器\n";
        std::cout << "6. 迭代器-迭代器类别\n";
        std::cout << "7. 迭代器-迭代器操作\n";
        std::cout << "8. 迭代器-特殊迭代器\n";
        std::cout << "9. 算法-非修改序列操作\n";
        std::cout << "10. 算法-修改序列操作\n";
        std::cout << "11. 算法-排序操作\n";
        std::cout << "12. 算法-数值操作\n";
        std::cout << "13. 函数对象与Lambda-预定义函数对象\n";
        std::cout << "14. 函数对象与Lambda-函数适配器\n";
        std::cout << "15. 函数对象与Lambda-Lambda表达式\n";
        std::cout << "16. 实用工具-对组与元组\n";
        std::cout << "17. 实用工具-智能指针\n";
        std::cout << "18. 实用工具-可选值与变体\n";
        std::cout << "19. 现代STL特性-C++11/14增强\n";
        std::cout << "20. 现代STL特性-C++17增强\n";
        std::cout << "21. 现代STL特性-C++20增强\n";
        std::cout << "22. STL最佳实践-性能考虑\n";
        std::cout << "23. STL最佳实践-常见陷阱\n";
        std::cout << "24. STL最佳实践-现代C++实践\n";

        int choice;
        std::cout << "选择一个主题 (1-24): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                stlOverview_coreComponents();
                break;
            case 2:
                stlOverview_designPrinciples();
                break;
            case 3:
                containers_sequenceContainers();
                break;
            case 4:
                containers_associativeContainers();
                break;
            case 5:
                containers_containerAdaptors();
                break;
            case 6:
                iterators_iteratorCategories();
                break;
            case 7:
                iterators_iteratorOperations();
                break;
            case 8:
                iterators_specialIterators();
                break;
            case 9:
                algorithms_nonModifyingSequenceOperations();
                break;
            case 10:
                algorithms_modifyingSequenceOperations();
                break;
            case 11:
                algorithms_sortingOperations();
                break;
            case 12:
                algorithms_numericOperations();
                break;
            case 13:
                functorsAndLambdas_predefinedFunctors();
                break;
            case 14:
                functorsAndLambdas_functionAdaptors();
                break;
            case 15:
                functorsAndLambdas_lambdaExpressions();
                break;
            case 16:
                utilityComponents_pairsAndTuples();
                break;
            case 17:
                utilityComponents_smartPointers();
                break;
            case 18:
                utilityComponents_optionalValuesAndVariants();
                break;
            case 19:
                modernSTLFeatures_cpp11And14Enhancements();
                break;
            case 20:
                modernSTLFeatures_cpp17Enhancements();
                break;
            case 21:
                modernSTLFeatures_cpp20Enhancements();
                break;
            case 22:
                stlBestPractices_performanceConsiderations();
                break;
            case 23:
                stlBestPractices_commonPitfalls();
                break;
            case 24:
                stlBestPractices_modernCppPractices();
                break;
            default:
                std::cout << "无效选择\n";
        }
    }

    void stlOverview_coreComponents() {
        std::cout << "ch19 stlOverview_coreComponents start";
    }
    
    void stlOverview_designPrinciples() {
        std::cout << "ch19 stlOverview_designPrinciples start";
    }
    
    void containers_sequenceContainers() {
        std::cout << "ch19 containers_sequenceContainers start";
    }
    
    void containers_associativeContainers() {
        std::cout << "ch19 containers_associativeContainers start";
    }
    
    void containers_containerAdaptors() {
        std::cout << "ch19 containers_containerAdaptors start";
    }
    
    void iterators_iteratorCategories() {
        std::cout << "ch19 iterators_iteratorCategories start";
    }
    
    void iterators_iteratorOperations() {
        std::cout << "ch19 iterators_iteratorOperations start";
    }
    
    void iterators_specialIterators() {
        std::cout << "ch19 iterators_specialIterators start";
    }
    
    void algorithms_nonModifyingSequenceOperations() {
        std::cout << "ch19 algorithms_nonModifyingSequenceOperations start";
    }
    
    void algorithms_modifyingSequenceOperations() {
        std::cout << "ch19 algorithms_modifyingSequenceOperations start";
    }
    
    void algorithms_sortingOperations() {
        std::cout << "ch19 algorithms_sortingOperations start";
    }
    
    void algorithms_numericOperations() {
        std::cout << "ch19 algorithms_numericOperations start";
    }
    
    void functorsAndLambdas_predefinedFunctors() {
        std::cout << "ch19 functorsAndLambdas_predefinedFunctors start";
    }
    
    void functorsAndLambdas_functionAdaptors() {
        std::cout << "ch19 functorsAndLambdas_functionAdaptors start";
    }
    
    void functorsAndLambdas_lambdaExpressions() {
        std::cout << "ch19 functorsAndLambdas_lambdaExpressions start";
    }
    
    void utilityComponents_pairsAndTuples() {
        std::cout << "ch19 utilityComponents_pairsAndTuples start";
    }
    
    void utilityComponents_smartPointers() {
        std::cout << "ch19 utilityComponents_smartPointers start";
    }
    
    void utilityComponents_optionalValuesAndVariants() {
        std::cout << "ch19 utilityComponents_optionalValuesAndVariants start";
    }
    
    void modernSTLFeatures_cpp11And14Enhancements() {
        std::cout << "ch19 modernSTLFeatures_cpp11And14Enhancements start";
    }
    
    void modernSTLFeatures_cpp17Enhancements() {
        std::cout << "ch19 modernSTLFeatures_cpp17Enhancements start";
    }
    
    void modernSTLFeatures_cpp20Enhancements() {
        std::cout << "ch19 modernSTLFeatures_cpp20Enhancements start";
    }
    
    void stlBestPractices_performanceConsiderations() {
        std::cout << "ch19 stlBestPractices_performanceConsiderations start";
    }
    
    void stlBestPractices_commonPitfalls() {
        std::cout << "ch19 stlBestPractices_commonPitfalls start";
    }
    
    void stlBestPractices_modernCppPractices() {
        std::cout << "ch19 stlBestPractices_modernCppPractices start";
    }
    

}

// 自动注册
REGISTER_CHAPTER(ch19, ch19::run);