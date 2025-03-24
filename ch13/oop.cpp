/**
 * @file oop.cpp
 * @author ragnor
 * @date 2025/03/24
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include "oop.h"
#include "ch_runner.h"

#include <iostream>

namespace ch13 {
    void run() {
        std::cout << "Running Chapter 13...\n";

        // 创建菜单系统
        std::cout << "1. 基础OOP概念-封装\n";
        std::cout << "2. 基础OOP概念-继承\n";
        std::cout << "3. 基础OOP概念-多态\n";
        std::cout << "4. 基础OOP概念-抽象\n";
        std::cout << "5. 类与对象-类定义与声明\n";
        std::cout << "6. 类与对象-对象生命周期\n";
        std::cout << "7. 类与对象-成员函数特性\n";
        std::cout << "8. 虚函数与多态-虚函数机制\n";
        std::cout << "9. 虚函数与多态-虚函数使用\n";
        std::cout << "10. 虚函数与多态-RTTI机制\n";
        std::cout << "11. 特殊成员函数-默认特殊函数\n";
        std::cout << "12. 特殊成员函数-三/五/零法则\n";
        std::cout << "13. 特殊成员函数-=default 和 =delete\n";
        std::cout << "14. 高级OOP特性-多重继承\n";
        std::cout << "15. 高级OOP特性-嵌套类型\n";
        std::cout << "16. 高级OOP特性-OOP设计模式\n";
        std::cout << "17. 现代C++ OOP特性-智能指针\n";
        std::cout << "18. 现代C++ OOP特性-移动语义\n";
        std::cout << "19. 现代C++ OOP特性-Lambda与闭包\n";
        std::cout << "20. 现代C++ OOP特性-Cpp20新特性\n";

        int choice;
        std::cout << "选择一个主题 (1-20): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                basicOOP_encapsulation();
                break;
            case 2:
                basicOOP_inheritance();
                break;
            case 3:
                basicOOP_polymorphism();
                break;
            case 4:
                basicOOP_abstraction();
                break;
            case 5:
                classAndObject_classDefinitionAndDeclaration();
                break;
            case 6:
                classAndObject_objectLifecycle();
                break;
            case 7:
                classAndObject_memberFunctionCharacteristics();
                break;
            case 8:
                virtualFunctionAndPolymorphism_virtualFunctionMechanism();
                break;
            case 9:
                virtualFunctionAndPolymorphism_virtualFunctionUsage();
                break;
            case 10:
                virtualFunctionAndPolymorphism_RTTI();
                break;
            case 11:
                specialMemberFunctions_default();
                break;
            case 12:
                specialMemberFunctions_ruleOf350();
                break;
            case 13:
                specialMemberFunctions_equalDefaultOrDelete();
                break;
            case 14:
                advancedOOP_multipleInheritance();
                break;
            case 15:
                advancedOOP_nestedTypes();
                break;
            case 16:
                advancedOOP_designPatterns();
                break;
            case 17:
                modernCPPFeatures_smartPointers();
                break;
            case 18:
                modernCPPFeatures_moveSemantics();
                break;
            case 19:
                modernCPPFeatures_lambdaAndClosures();
                break;
            case 20:
                modernCPPFeatures_cpp20New();
                break;
            default:
                std::cout << "无效选择\n";
        }
    }

    void basicOOP_encapsulation() {
        std::cout << "ch13 basicOOP_encapsulation start";
    }
    
    void basicOOP_inheritance() {
        std::cout << "ch13 basicOOP_inheritance start";
    }
    
    void basicOOP_polymorphism() {
        std::cout << "ch13 basicOOP_polymorphism start";
    }
    
    void basicOOP_abstraction() {
        std::cout << "ch13 basicOOP_abstraction start";
    }
    
    void classAndObject_classDefinitionAndDeclaration() {
        std::cout << "ch13 classAndObject_classDefinitionAndDeclaration start";
    }
    
    void classAndObject_objectLifecycle() {
        std::cout << "ch13 classAndObject_objectLifecycle start";
    }
    
    void classAndObject_memberFunctionCharacteristics() {
        std::cout << "ch13 classAndObject_memberFunctionCharacteristics start";
    }
    
    void virtualFunctionAndPolymorphism_virtualFunctionMechanism() {
        std::cout << "ch13 virtualFunctionAndPolymorphism_virtualFunctionMechanism start";
    }
    
    void virtualFunctionAndPolymorphism_virtualFunctionUsage() {
        std::cout << "ch13 virtualFunctionAndPolymorphism_virtualFunctionUsage start";
    }
    
    void virtualFunctionAndPolymorphism_RTTI() {
        std::cout << "ch13 virtualFunctionAndPolymorphism_RTTI start";
    }
    
    void specialMemberFunctions_default() {
        std::cout << "ch13 specialMemberFunctions_default start";
    }
    
    void specialMemberFunctions_ruleOf350() {
        std::cout << "ch13 specialMemberFunctions_ruleOf350 start";
    }
    
    void specialMemberFunctions_equalDefaultOrDelete() {
        std::cout << "ch13 specialMemberFunctions_equalDefaultOrDelete start";
    }
    
    void advancedOOP_multipleInheritance() {
        std::cout << "ch13 advancedOOP_multipleInheritance start";
    }
    
    void advancedOOP_nestedTypes() {
        std::cout << "ch13 advancedOOP_nestedTypes start";
    }
    
    void advancedOOP_designPatterns() {
        std::cout << "ch13 advancedOOP_designPatterns start";
    }
    
    void modernCPPFeatures_smartPointers() {
        std::cout << "ch13 modernCPPFeatures_smartPointers start";
    }
    
    void modernCPPFeatures_moveSemantics() {
        std::cout << "ch13 modernCPPFeatures_moveSemantics start";
    }
    
    void modernCPPFeatures_lambdaAndClosures() {
        std::cout << "ch13 modernCPPFeatures_lambdaAndClosures start";
    }
    
    void modernCPPFeatures_cpp20New() {
        std::cout << "ch13 modernCPPFeatures_cpp20New start";
    }
    

}

// 自动注册
REGISTER_CHAPTER(ch13, ch13::run);