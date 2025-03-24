/**
 * @file templates.cpp
 * @author ragnor
 * @date 2025/03/24
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include "templates.h"
#include "ch_runner.h"

#include <iostream>

namespace ch20 {
    void run() {
        std::cout << "Running Chapter 20...\n";

        // 创建菜单系统
        std::cout << "1. 基本模板概念-模板定义\n";
        std::cout << "2. 基本模板概念-模板语法\n";
        std::cout << "3. 基本模板概念-模板类型推导\n";
        std::cout << "4. 函数模板-基本语法\n";
        std::cout << "5. 函数模板-函数模板特性\n";
        std::cout << "6. 函数模板-参数推导\n";
        std::cout << "7. 类模板-基本语法\n";
        std::cout << "8. 类模板-类模板特性\n";
        std::cout << "9. 类模板-类模板实例化\n";
        std::cout << "10. 模板特化-全特化\n";
        std::cout << "11. 模板特化-偏特化\n";
        std::cout << "12. 模板特化-成员特化\n";
        std::cout << "13. 模板参数-类型参数\n";
        std::cout << "14. 模板参数-非类型参数\n";
        std::cout << "15. 模板参数-模板模板参数\n";
        std::cout << "16. 模板元编程-编译期计算\n";
        std::cout << "17. 模板元编程-类型萃取\n";
        std::cout << "18. 模板元编程-编译期编程技术\n";
        std::cout << "19. 可变参数模板-基本语法\n";
        std::cout << "20. 可变参数模板-参数包操作\n";
        std::cout << "21. 可变参数模板-应用场景\n";
        std::cout << "22. 概念与约束-概念基础\n";
        std::cout << "23. 概念与约束-约束表达式\n";
        std::cout << "24. 概念与约束-约束解析\n";
        std::cout << "25. 模板最佳实践-设计考虑\n";
        std::cout << "26. 模板最佳实践-性能优化\n";
        std::cout << "27. 模板最佳实践-调试与维护\n";

        int choice;
        std::cout << "选择一个主题 (1-27): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                basicTemplateConcepts_templateDefinition();
                break;
            case 2:
                basicTemplateConcepts_templateSyntax();
                break;
            case 3:
                basicTemplateConcepts_templateTypeDeduction();
                break;
            case 4:
                functionTemplates_basicSyntax();
                break;
            case 5:
                functionTemplates_functionTemplateFeatures();
                break;
            case 6:
                functionTemplates_argumentDeduction();
                break;
            case 7:
                classTemplates_basicSyntax();
                break;
            case 8:
                classTemplates_classTemplateFeatures();
                break;
            case 9:
                classTemplates_classTemplateInstantiation();
                break;
            case 10:
                templateSpecialization_fullSpecialization();
                break;
            case 11:
                templateSpecialization_partialSpecialization();
                break;
            case 12:
                templateSpecialization_memberSpecialization();
                break;
            case 13:
                templateParameters_typeParameters();
                break;
            case 14:
                templateParameters_nonTypeParameters();
                break;
            case 15:
                templateParameters_templateTemplateParameters();
                break;
            case 16:
                templateMetaprogramming_compileTimeComputation();
                break;
            case 17:
                templateMetaprogramming_typeTraits();
                break;
            case 18:
                templateMetaprogramming_compileTimeProgrammingTechniques();
                break;
            case 19:
                variadicTemplates_basicSyntax();
                break;
            case 20:
                variadicTemplates_parameterPackOperations();
                break;
            case 21:
                variadicTemplates_applicationScenarios();
                break;
            case 22:
                conceptsAndConstraints_conceptBasics();
                break;
            case 23:
                conceptsAndConstraints_constraintExpressions();
                break;
            case 24:
                conceptsAndConstraints_constraintResolution();
                break;
            case 25:
                templateBestPractices_designConsiderations();
                break;
            case 26:
                templateBestPractices_performanceOptimization();
                break;
            case 27:
                templateBestPractices_debuggingAndMaintenance();
                break;
            default:
                std::cout << "无效选择\n";
        }
    }

    void basicTemplateConcepts_templateDefinition() {
        std::cout << "ch20 basicTemplateConcepts_templateDefinition start";
    }
    
    void basicTemplateConcepts_templateSyntax() {
        std::cout << "ch20 basicTemplateConcepts_templateSyntax start";
    }
    
    void basicTemplateConcepts_templateTypeDeduction() {
        std::cout << "ch20 basicTemplateConcepts_templateTypeDeduction start";
    }
    
    void functionTemplates_basicSyntax() {
        std::cout << "ch20 functionTemplates_basicSyntax start";
    }
    
    void functionTemplates_functionTemplateFeatures() {
        std::cout << "ch20 functionTemplates_functionTemplateFeatures start";
    }
    
    void functionTemplates_argumentDeduction() {
        std::cout << "ch20 functionTemplates_argumentDeduction start";
    }
    
    void classTemplates_basicSyntax() {
        std::cout << "ch20 classTemplates_basicSyntax start";
    }
    
    void classTemplates_classTemplateFeatures() {
        std::cout << "ch20 classTemplates_classTemplateFeatures start";
    }
    
    void classTemplates_classTemplateInstantiation() {
        std::cout << "ch20 classTemplates_classTemplateInstantiation start";
    }
    
    void templateSpecialization_fullSpecialization() {
        std::cout << "ch20 templateSpecialization_fullSpecialization start";
    }
    
    void templateSpecialization_partialSpecialization() {
        std::cout << "ch20 templateSpecialization_partialSpecialization start";
    }
    
    void templateSpecialization_memberSpecialization() {
        std::cout << "ch20 templateSpecialization_memberSpecialization start";
    }
    
    void templateParameters_typeParameters() {
        std::cout << "ch20 templateParameters_typeParameters start";
    }
    
    void templateParameters_nonTypeParameters() {
        std::cout << "ch20 templateParameters_nonTypeParameters start";
    }
    
    void templateParameters_templateTemplateParameters() {
        std::cout << "ch20 templateParameters_templateTemplateParameters start";
    }
    
    void templateMetaprogramming_compileTimeComputation() {
        std::cout << "ch20 templateMetaprogramming_compileTimeComputation start";
    }
    
    void templateMetaprogramming_typeTraits() {
        std::cout << "ch20 templateMetaprogramming_typeTraits start";
    }
    
    void templateMetaprogramming_compileTimeProgrammingTechniques() {
        std::cout << "ch20 templateMetaprogramming_compileTimeProgrammingTechniques start";
    }
    
    void variadicTemplates_basicSyntax() {
        std::cout << "ch20 variadicTemplates_basicSyntax start";
    }
    
    void variadicTemplates_parameterPackOperations() {
        std::cout << "ch20 variadicTemplates_parameterPackOperations start";
    }
    
    void variadicTemplates_applicationScenarios() {
        std::cout << "ch20 variadicTemplates_applicationScenarios start";
    }
    
    void conceptsAndConstraints_conceptBasics() {
        std::cout << "ch20 conceptsAndConstraints_conceptBasics start";
    }
    
    void conceptsAndConstraints_constraintExpressions() {
        std::cout << "ch20 conceptsAndConstraints_constraintExpressions start";
    }
    
    void conceptsAndConstraints_constraintResolution() {
        std::cout << "ch20 conceptsAndConstraints_constraintResolution start";
    }
    
    void templateBestPractices_designConsiderations() {
        std::cout << "ch20 templateBestPractices_designConsiderations start";
    }
    
    void templateBestPractices_performanceOptimization() {
        std::cout << "ch20 templateBestPractices_performanceOptimization start";
    }
    
    void templateBestPractices_debuggingAndMaintenance() {
        std::cout << "ch20 templateBestPractices_debuggingAndMaintenance start";
    }
    

}

// 自动注册
REGISTER_CHAPTER(ch20, ch20::run);