/**
 * @file control_flow.cpp
 * @author ragnor
 * @date 2025/03/24
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include "control_flow.h"
#include "ch_runner.h"

#include <iostream>

namespace ch9 {
    void run() {
        std::cout << "Running Chapter 9...\n";

        // 创建菜单系统
        std::cout << "1. 顺序-语句执行\n";
        std::cout << "2. 顺序-表达式求值\n";
        std::cout << "3. 顺序-作用与和生命周期\n";
        std::cout << "4. 顺序-函数调用\n";
        std::cout << "5. 分支-if else\n";
        std::cout << "6. 分支-switch\n";
        std::cout << "7. 分支-condition ? expr1 : expr2\n";
        std::cout << "8. 分支-编译时条件分支-constexpr if\n";
        std::cout << "9. 分支-Concepts & Constraints\n";
        std::cout << "10. 循环-for\n";
        std::cout << "11. 循环-range based for\n";
        std::cout << "12. 循环-while\n";
        std::cout << "13. 循环-do while\n";
        std::cout << "14. 循环-控制-break continue\n";
        std::cout << "15. 循环-std::ranges\n";
        std::cout << "16. 显式-try/catch/throw\n";
        std::cout << "17. 显式-return goto\n";
        std::cout << "18. 现代C++-RAII\n";
        std::cout << "19. 现代C++-std::optional\n";
        std::cout << "20. 现代C++-协程\n";
        std::cout << "21. 现代C++-执行策略\n";

        int choice;
        std::cout << "选择一个主题 (1-21): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                sequential_statementExecution();
                break;
            case 2:
                sequential_expressionEvaluation();
                break;
            case 3:
                sequential_scopeAndLifetime();
                break;
            case 4:
                sequential_functionCalls();
                break;
            case 5:
                branch_ifElseStatements();
                break;
            case 6:
                branch_switchStatements();
                break;
            case 7:
                branch_conditionalOperator();
                break;
            case 8:
                branch_constexprIf();
                break;
            case 9:
                branch_conceptsAndConstraints();
                break;
            case 10:
                loop_for();
                break;
            case 11:
                loop_rangeBasedFor();
                break;
            case 12:
                loop_while();
                break;
            case 13:
                loop_doWhile();
                break;
            case 14:
                loop_controlStatements_break_continue();
                break;
            case 15:
                loop_stdRanges();
                break;
            case 16:
                explicit_exceptionHandling();
                break;
            case 17:
                explicit_jumpStatements();
                break;
            case 18:
                modernCpp_RAII();
                break;
            case 19:
                modernCpp_stdOptional();
                break;
            case 20:
                modernCpp_coroutines();
                break;
            case 21:
                modernCpp_executionPolicies();
                break;
            default:
                std::cout << "无效选择\n";
        }
    }

    void sequential_statementExecution() {
        std::cout << "ch9 sequential_statementExecution start";
    }
    
    void sequential_expressionEvaluation() {
        std::cout << "ch9 sequential_expressionEvaluation start";
    }
    
    void sequential_scopeAndLifetime() {
        std::cout << "ch9 sequential_scopeAndLifetime start";
    }
    
    void sequential_functionCalls() {
        std::cout << "ch9 sequential_functionCalls start";
    }
    
    void branch_ifElseStatements() {
        std::cout << "ch9 branch_ifElseStatements start";
    }
    
    void branch_switchStatements() {
        std::cout << "ch9 branch_switchStatements start";
    }
    
    void branch_conditionalOperator() {
        std::cout << "ch9 branch_conditionalOperator start";
    }
    
    void branch_constexprIf() {
        std::cout << "ch9 branch_constexprIf start";
    }
    
    void branch_conceptsAndConstraints() {
        std::cout << "ch9 branch_conceptsAndConstraints start";
    }
    
    void loop_for() {
        std::cout << "ch9 loop_for start";
    }
    
    void loop_rangeBasedFor() {
        std::cout << "ch9 loop_rangeBasedFor start";
    }
    
    void loop_while() {
        std::cout << "ch9 loop_while start";
    }
    
    void loop_doWhile() {
        std::cout << "ch9 loop_doWhile start";
    }
    
    void loop_controlStatements_break_continue() {
        std::cout << "ch9 loop_controlStatements_break_continue start";
    }
    
    void loop_stdRanges() {
        std::cout << "ch9 loop_stdRanges start";
    }
    
    void explicit_exceptionHandling() {
        std::cout << "ch9 explicit_exceptionHandling start";
    }
    
    void explicit_jumpStatements() {
        std::cout << "ch9 explicit_jumpStatements start";
    }
    
    void modernCpp_RAII() {
        std::cout << "ch9 modernCpp_RAII start";
    }
    
    void modernCpp_stdOptional() {
        std::cout << "ch9 modernCpp_stdOptional start";
    }
    
    void modernCpp_coroutines() {
        std::cout << "ch9 modernCpp_coroutines start";
    }
    
    void modernCpp_executionPolicies() {
        std::cout << "ch9 modernCpp_executionPolicies start";
    }
    

}

// 自动注册
REGISTER_CHAPTER(ch9, ch9::run);