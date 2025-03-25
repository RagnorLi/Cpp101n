/**
 * @file bug_debug.cpp
 * @author ragnor
 * @date 2025/03/20
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include "debug.h"
#include "ch_runner.h"

#include <iostream>

namespace ch5 {
    void run() {
        std::cout << "Running Chapter 5...\n";

        // 创建菜单系统
        std::cout << "1. 实验系列1 内存错误-内存泄漏\n";
        std::cout << "2. 实验系列1 内存错误-缓存区溢出\n";
        std::cout << "3. 实验系列1 内存错误-悬空指针、野指针\n";
        std::cout << "4. 实验系列2 并发错误-数据竞争\n";
        std::cout << "5. 实验系列2 并发错误-死锁\n";
        std::cout << "6. 实验系列3 类型与语义错误-未定义行为\n";
        std::cout << "7. 实验系列3 类型与语义错误-类型转换错误\n";
        std::cout << "8. 实验系列4 资源管理错误-文件句柄泄漏\n";
        std::cout << "9. 实验系列4 资源管理错误-异常安全问题\n";
        std::cout << "10. 实验系列5 逻辑错误调试-边界条件错误\n";
        std::cout << "11. 实验系列5 逻辑错误调试-算法实现错误\n";
        std::cout << "12. 实验系列6 现代C++特性错误调试-智能指针错误\n";
        std::cout << "13. 实验系列6 现代C++特性错误调试-完美转发失败\n";
        std::cout << "14. 实验系列7 性能问题调试-缓存不友好的数据结构\n";
        std::cout << "15. 实验系列7 性能问题调试-过度的动态内存分配\n";
        std::cout << "16. 实验系列8 构建与链接错误调试-符号冲突与可见性\n";
        std::cout << "17. 实验系列8 构建与链接错误调试-库依赖与版本冲突\n";
        std::cout << "18. 实验系列9 模板和泛型编程错误-模板实例化错误\n";
        std::cout << "19. 实验系列9 模板和泛型编程错误-模板元编程调试\n";
        std::cout << "20. 实验系列10 移动语义与值类别错误-移动语义错误\n";
        std::cout << "21. 实验系列10 移动语义与值类别错误-值类别与引用限定符\n";
        std::cout << "22. 实验系列11 内存布局与对齐问题-结构体填充与对齐\n";
        std::cout << "23. 实验系列11 内存布局与对齐问题-数据序列化错误\n";
        std::cout << "24. 实验系列12 多平台兼容性问题-编译器行为差异\n";
        std::cout << "25. 实验系列12 多平台兼容性问题-平台特定问题\n";
        std::cout << "26. 实验系列13 调试工具链深入使用-GDB高级功能\n";
        std::cout << "27. 实验系列13 调试工具链深入使用-动态分析与断言技术\n";

        int choice;
        std::cout << "选择一个主题 (1-27): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                memoryError_leak();
                break;
            case 2:
                memoryError_bufferOverflow();
                break;
            case 3:
                memoryError_danglingPointer();
                break;
            case 4:
                concurrencyError_dataRace();
                break;
            case 5:
                concurrencyError_deadlock();
                break;
            case 6:
                semanticError_undefinedBehavior();
                break;
            case 7:
                semanticError_typeConversion();
                break;
            case 8:
                resourceError_fileHandleLeak();
                break;
            case 9:
                resourceError_exceptionSafety();
                break;
            case 10:
                logicError_boundaryCondition();
                break;
            case 11:
                logicError_algorithmImplementation();
                break;
            case 12:
                modernCppError_smartPointers();
                break;
            case 13:
                modernCppError_perfectForwarding();
                break;
            case 14:
                performanceIssue_cacheUnfriendly();
                break;
            case 15:
                performanceIssue_excessiveAllocation();
                break;
            case 16:
                buildError_symbolConflict();
                break;
            case 17:
                buildError_libraryDependency();
                break;
            case 18:
                templateError_instantiation();
                break;
            case 19:
                templateError_metaprogramming();
                break;
            case 20:
                valueCategories_moveSemantics();
                break;
            case 21:
                valueCategories_refQualifiers();
                break;
            case 22:
                memoryLayout_structPadding();
                break;
            case 23:
                memoryLayout_serialization();
                break;
            case 24:
                platformCompatibility_compilerDifferences();
                break;
            case 25:
                platformCompatibility_specificIssues();
                break;
            case 26:
                debugTools_gdbAdvanced();
                break;
            case 27:
                debugTools_assertionTechniques();
                break;
            default:
                std::cout << "无效选择\n";
        }
    }

    void memoryError_leak() {
        std::cout << "ch5 memoryError_leak start";
    }
    
    void memoryError_bufferOverflow() {
        std::cout << "ch5 memoryError_bufferOverflow start";
    }
    
    void memoryError_danglingPointer() {
        std::cout << "ch5 memoryError_danglingPointer start";
    }
    
    void concurrencyError_dataRace() {
        std::cout << "ch5 concurrencyError_dataRace start";
    }
    
    void concurrencyError_deadlock() {
        std::cout << "ch5 concurrencyError_deadlock start";
    }
    
    void semanticError_undefinedBehavior() {
        std::cout << "ch5 semanticError_undefinedBehavior start";
    }
    
    void semanticError_typeConversion() {
        std::cout << "ch5 semanticError_typeConversion start";
    }
    
    void resourceError_fileHandleLeak() {
        std::cout << "ch5 resourceError_fileHandleLeak start";
    }
    
    void resourceError_exceptionSafety() {
        std::cout << "ch5 resourceError_exceptionSafety start";
    }
    
    void logicError_boundaryCondition() {
        std::cout << "ch5 logicError_boundaryCondition start";
    }
    
    void logicError_algorithmImplementation() {
        std::cout << "ch5 logicError_algorithmImplementation start";
    }
    
    void modernCppError_smartPointers() {
        std::cout << "ch5 modernCppError_smartPointers start";
    }
    
    void modernCppError_perfectForwarding() {
        std::cout << "ch5 modernCppError_perfectForwarding start";
    }
    
    void performanceIssue_cacheUnfriendly() {
        std::cout << "ch5 performanceIssue_cacheUnfriendly start";
    }
    
    void performanceIssue_excessiveAllocation() {
        std::cout << "ch5 performanceIssue_excessiveAllocation start";
    }
    
    void buildError_symbolConflict() {
        std::cout << "ch5 buildError_symbolConflict start";
    }
    
    void buildError_libraryDependency() {
        std::cout << "ch5 buildError_libraryDependency start";
    }
    
    void templateError_instantiation() {
        std::cout << "ch5 templateError_instantiation start";
    }
    
    void templateError_metaprogramming() {
        std::cout << "ch5 templateError_metaprogramming start";
    }
    
    void valueCategories_moveSemantics() {
        std::cout << "ch5 valueCategories_moveSemantics start";
    }
    
    void valueCategories_refQualifiers() {
        std::cout << "ch5 valueCategories_refQualifiers start";
    }
    
    void memoryLayout_structPadding() {
        std::cout << "ch5 memoryLayout_structPadding start";
    }
    
    void memoryLayout_serialization() {
        std::cout << "ch5 memoryLayout_serialization start";
    }
    
    void platformCompatibility_compilerDifferences() {
        std::cout << "ch5 platformCompatibility_compilerDifferences start";
    }
    
    void platformCompatibility_specificIssues() {
        std::cout << "ch5 platformCompatibility_specificIssues start";
    }
    
    void debugTools_gdbAdvanced() {
        std::cout << "ch5 debugTools_gdbAdvanced start";
    }
    
    void debugTools_assertionTechniques() {
        std::cout << "ch5 debugTools_assertionTechniques start";
    }
    

}

// 自动注册
REGISTER_CHAPTER(ch5, ch5::run);