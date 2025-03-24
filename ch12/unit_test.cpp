/**
 * @file unit_test.cpp
 * @author ragnor
 * @date 2025/03/24
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include "unit_test.h"
#include "ch_runner.h"

#include <iostream>

namespace ch12 {
    void run() {
        std::cout << "Running Chapter 12...\n";

        // 创建菜单系统
        std::cout << "1. 测试框架-主流框架\n";
        std::cout << "2. 测试框架-框架特性\n";
        std::cout << "3. 测试方法与类型-基本测试技术\n";
        std::cout << "4. 测试方法与类型-高级测试技术\n";
        std::cout << "5. 测试方法与类型-Mock\n";
        std::cout << "6. 测试结构与组织-测试层次\n";
        std::cout << "7. 测试结构与组织-命名\n";
        std::cout << "8. 测试结构与组织-风格\n";
        std::cout << "9. 测试结构与组织-CICD\n";
        std::cout << "10. 测试覆盖率与质量-覆盖率度量指标\n";
        std::cout << "11. 测试覆盖率与质量-覆盖率工具\n";
        std::cout << "12. 测试覆盖率与质量-测试质量度量指标\n";
        std::cout << "13. 测试驱动开发-工作流\n";
        std::cout << "14. 测试驱动开发-最佳实践\n";
        std::cout << "15. 高级测试技术-性能测试\n";
        std::cout << "16. 高级测试技术-属性测试\n";
        std::cout << "17. 高级测试技术-并发测试\n";

        int choice;
        std::cout << "选择一个主题 (1-17): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                testFrameworks_popularFrameworks();
                break;
            case 2:
                testFrameworks_frameworkFeatures();
                break;
            case 3:
                testingMethodsAndTypes_basics();
                break;
            case 4:
                testingMethodsAndTypes_advanced();
                break;
            case 5:
                testingMethodsAndTypes_mock();
                break;
            case 6:
                testStructureAndOrganization_testHierarchy();
                break;
            case 7:
                testStructureAndOrganization_testNaming();
                break;
            case 8:
                testStructureAndOrganization_testStyle();
                break;
            case 9:
                testStructureAndOrganization_ci();
                break;
            case 10:
                testCoverageAndQuality_metrics();
                break;
            case 11:
                testCoverageAndQuality_tools();
                break;
            case 12:
                testCoverageAndQuality_quality();
                break;
            case 13:
                testDrivenDev_workflow();
                break;
            case 14:
                testDrivenDev_practices();
                break;
            case 15:
                advancedTestTechniques_performance();
                break;
            case 16:
                advancedTestTechniques_property();
                break;
            case 17:
                advancedTestTechniques_concurrency();
                break;
            default:
                std::cout << "无效选择\n";
        }
    }

    void testFrameworks_popularFrameworks() {
        std::cout << "ch12 testFrameworks_popularFrameworks start";
    }
    
    void testFrameworks_frameworkFeatures() {
        std::cout << "ch12 testFrameworks_frameworkFeatures start";
    }
    
    void testingMethodsAndTypes_basics() {
        std::cout << "ch12 testingMethodsAndTypes_basics start";
    }
    
    void testingMethodsAndTypes_advanced() {
        std::cout << "ch12 testingMethodsAndTypes_advanced start";
    }
    
    void testingMethodsAndTypes_mock() {
        std::cout << "ch12 testingMethodsAndTypes_mock start";
    }
    
    void testStructureAndOrganization_testHierarchy() {
        std::cout << "ch12 testStructureAndOrganization_testHierarchy start";
    }
    
    void testStructureAndOrganization_testNaming() {
        std::cout << "ch12 testStructureAndOrganization_testNaming start";
    }
    
    void testStructureAndOrganization_testStyle() {
        std::cout << "ch12 testStructureAndOrganization_testStyle start";
    }
    
    void testStructureAndOrganization_ci() {
        std::cout << "ch12 testStructureAndOrganization_ci start";
    }
    
    void testCoverageAndQuality_metrics() {
        std::cout << "ch12 testCoverageAndQuality_metrics start";
    }
    
    void testCoverageAndQuality_tools() {
        std::cout << "ch12 testCoverageAndQuality_tools start";
    }
    
    void testCoverageAndQuality_quality() {
        std::cout << "ch12 testCoverageAndQuality_quality start";
    }
    
    void testDrivenDev_workflow() {
        std::cout << "ch12 testDrivenDev_workflow start";
    }
    
    void testDrivenDev_practices() {
        std::cout << "ch12 testDrivenDev_practices start";
    }
    
    void advancedTestTechniques_performance() {
        std::cout << "ch12 advancedTestTechniques_performance start";
    }
    
    void advancedTestTechniques_property() {
        std::cout << "ch12 advancedTestTechniques_property start";
    }
    
    void advancedTestTechniques_concurrency() {
        std::cout << "ch12 advancedTestTechniques_concurrency start";
    }
    

}

// 自动注册
REGISTER_CHAPTER(ch12, ch12::run);