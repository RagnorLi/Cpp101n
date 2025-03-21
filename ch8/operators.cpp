/**
 * @file operators.cpp
 * @author ragnor
 * @date 2025/03/21
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include "operators.h"
#include "ch_runner.h"

#include <iostream>

namespace ch8 {
    void run() {
        std::cout << "Running Chapter 8...\n";

        // 创建一个简单的菜单系统
        std::cout << "1. 算术运算符-基本运算符\n";
        std::cout << "2. 算术运算符-一元运算符\n";
        std::cout << "3. 关系运算符-比较运算符\n";
        std::cout << "4. 逻辑运算符-基本逻辑运算符\n";
        std::cout << "5. 位运算符-基本位运算符\n";
        std::cout << "6. 赋值运算符-简单赋值\n";
        std::cout << "7. 赋值运算符-符合赋值\n";
        std::cout << "8. 成员访问运算符-基本成员访问\n";
        std::cout << "9. 成员访问运算符-成员指针\n";
        std::cout << "10. 特殊运算符-内存操作\n";
        std::cout << "11. 特殊运算符-其他\n";
        std::cout << "12. 类型处理运算符-类型转换\n";
        std::cout << "13. 类型处理运算符-类型查询\n";
        std::cout << "14. C++11-移动予语义\n";
        std::cout << "15. C++11-初始化\n";
        std::cout << "16. C++11-字面量后缀\n";
        std::cout << "17. C++20-协程支持\n";
        std::cout << "18. C++20-模块\n";
        std::cout << "19. 运算符重载-可重载运算符\n";
        std::cout << "20. 运算符重载-不可重载运算符\n";
        std::cout << "21. 运算符重载-重载方式\n";
        std::cout << "22. 运算符优先级-最高优先级\n";
        std::cout << "23. 运算符优先级-高优先级\n";
        std::cout << "24. 运算符优先级-中优先级\n";
        std::cout << "25. 运算符优先级-低优先级\n";
        std::cout << "26. 运算符优先级-最低优先级\n";

        int choice;
        std::cout << "选择一个主题 (1-26): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                arithmeticOperator_basicArithmeticOperators();
                break;
            case 2:
                arithmeticOperator_unaryOperators();
                break;
            case 3:
                relationalOperator_comparisonOperators();
                break;
            case 4:
                logicalOperator_basicLogicalOperators();
                break;
            case 5:
                bitwiseOperator_basicBitwiseOperators();
                break;
            case 6:
                assignmentOperator_simpleAssignment();
                break;
            case 7:
                assignmentOperator_compoundAssignment();
                break;
            case 8:
                memberAccessOperator_basicAccess();
                break;
            case 9:
                memberAccessOperator_pointerToMember();
                break;
            case 10:
                specialOperator_memoryOperations();
                break;
            case 11:
                specialOperator_others();
                break;
            case 12:
                typeOperator_casting();
                break;
            case 13:
                typeOperator_typeQueries();
                break;
            case 14:
                cpp11Operator_moveSemantics();
                break;
            case 15:
                cpp11Operator_initialization();
                break;
            case 16:
                cpp11Operator_literals();
                break;
            case 17:
                cpp20Operator_coroutines();
                break;
            case 18:
                cpp20Operator_modules();
                break;
            case 19:
                operatorOverload_overloadable();
                break;
            case 20:
                operatorOverload_nonOverloadable();
                break;
            case 21:
                operatorOverload_methods();
                break;
            case 22:
                operatorPrecedence_highestPriority();
                break;
            case 23:
                operatorPrecedence_highPriority();
                break;
            case 24:
                operatorPrecedence_mediumPriority();
                break;
            case 25:
                operatorPrecedence_lowPriority();
                break;
            case 26:
                operatorPrecedence_lowestPriority();
                break;
            default:
                std::cout << "无效选择\n";
        }
    }

    void arithmeticOperator_basicArithmeticOperators() {
        std::cout << "ch8 arithmeticOperator_basicArithmeticOperators start";
    }
    
    void arithmeticOperator_unaryOperators() {
        std::cout << "ch8 arithmeticOperator_unaryOperators start";
    }
    
    void relationalOperator_comparisonOperators() {
        std::cout << "ch8 relationalOperator_comparisonOperators start";
    }
    
    void logicalOperator_basicLogicalOperators() {
        std::cout << "ch8 logicalOperator_basicLogicalOperators start";
    }
    
    void bitwiseOperator_basicBitwiseOperators() {
        std::cout << "ch8 bitwiseOperator_basicBitwiseOperators start";
    }
    
    void assignmentOperator_simpleAssignment() {
        std::cout << "ch8 assignmentOperator_simpleAssignment start";
    }
    
    void assignmentOperator_compoundAssignment() {
        std::cout << "ch8 assignmentOperator_compoundAssignment start";
    }
    
    void memberAccessOperator_basicAccess() {
        std::cout << "ch8 memberAccessOperator_basicAccess start";
    }
    
    void memberAccessOperator_pointerToMember() {
        std::cout << "ch8 memberAccessOperator_pointerToMember start";
    }
    
    void specialOperator_memoryOperations() {
        std::cout << "ch8 specialOperator_memoryOperations start";
    }
    
    void specialOperator_others() {
        std::cout << "ch8 specialOperator_others start";
    }
    
    void typeOperator_casting() {
        std::cout << "ch8 typeOperator_casting start";
    }
    
    void typeOperator_typeQueries() {
        std::cout << "ch8 typeOperator_typeQueries start";
    }
    
    void cpp11Operator_moveSemantics() {
        std::cout << "ch8 cpp11Operator_moveSemantics start";
    }
    
    void cpp11Operator_initialization() {
        std::cout << "ch8 cpp11Operator_initialization start";
    }
    
    void cpp11Operator_literals() {
        std::cout << "ch8 cpp11Operator_literals start";
    }
    
    void cpp20Operator_coroutines() {
        std::cout << "ch8 cpp20Operator_coroutines start";
    }
    
    void cpp20Operator_modules() {
        std::cout << "ch8 cpp20Operator_modules start";
    }
    
    void operatorOverload_overloadable() {
        std::cout << "ch8 operatorOverload_overloadable start";
    }
    
    void operatorOverload_nonOverloadable() {
        std::cout << "ch8 operatorOverload_nonOverloadable start";
    }
    
    void operatorOverload_methods() {
        std::cout << "ch8 operatorOverload_methods start";
    }
    
    void operatorPrecedence_highestPriority() {
        std::cout << "ch8 operatorPrecedence_highestPriority start";
    }
    
    void operatorPrecedence_highPriority() {
        std::cout << "ch8 operatorPrecedence_highPriority start";
    }
    
    void operatorPrecedence_mediumPriority() {
        std::cout << "ch8 operatorPrecedence_mediumPriority start";
    }
    
    void operatorPrecedence_lowPriority() {
        std::cout << "ch8 operatorPrecedence_lowPriority start";
    }
    
    void operatorPrecedence_lowestPriority() {
        std::cout << "ch8 operatorPrecedence_lowestPriority start";
    }
    

}

// 自动注册
REGISTER_CHAPTER(ch8, ch8::run);