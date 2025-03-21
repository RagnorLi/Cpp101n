/**
 * @file fundamental_datatypes.cpp
 * @author ragnor
 * @date 2025/03/21
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include "fundamental_datatypes.h"
#include "ch_runner.h"

#include <iostream>

namespace ch6 {
    void run() {
        std::cout << "Running Chapter 6...\n";

        // 创建一个简单的菜单系统
        std::cout << "1. 基本数据类型-空\n";
        std::cout << "2. 基本数据类型-布尔\n";
        std::cout << "3. 基本数据类型-字符\n";
        std::cout << "4. 基本数据类型-整型\n";
        std::cout << "5. 基本数据类型-浮点\n";
        std::cout << "6. 复合类型_引用\n";
        std::cout << "7. 复合类型_指针\n";
        std::cout << "8. 复合类型_数组\n";
        std::cout << "9. 复合类型_函数\n";
        std::cout << "10. compoundType_枚举\n";
        std::cout << "11. 用户定义类型_类\n";
        std::cout << "12. 用户定义类型_结构体\n";
        std::cout << "13. 用户定义类型_联合体\n";
        std::cout << "14. 标准库类-字符串\n";
        std::cout << "15. 标准库类型_容器\n";
        std::cout << "16. 标准库类型_智能指针\n";
        std::cout << "17. 标准库类型_流\n";
        std::cout << "18. 标准库类型_其他\n";
        std::cout << "19. 类型修饰符类型-限定符\n";
        std::cout << "20. 类型修饰符类型-存储期限定符\n";
        std::cout << "21. C++20特有类型-概念\n";
        std::cout << "22. C++20特有类型-范围库\n";
        std::cout << "23. C++20特有类型-sourceLocation\n";
        std::cout << "24. C++20特有类型-协程\n";

        int choice;
        std::cout << "选择一个主题 (1-24): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                basicType_empty();
                break;
            case 2:
                basicType_bool();
                break;
            case 3:
                basicType_char();
                break;
            case 4:
                basicType_int();
                break;
            case 5:
                basicType_float();
                break;
            case 6:
                compoundType_reference();
                break;
            case 7:
                compoundType_pointer();
                break;
            case 8:
                compoundType_array();
                break;
            case 9:
                compoundType_function();
                break;
            case 10:
                compoundType_enum();
                break;
            case 11:
                userDefineType_class();
                break;
            case 12:
                userDefineType_struct();
                break;
            case 13:
                userDefineType_union();
                break;
            case 14:
                standardLibType_string();
                break;
            case 15:
                standardLibType_container();
                break;
            case 16:
                standardLibType_smartPointer();
                break;
            case 17:
                standardLibType_stream();
                break;
            case 18:
                standardLibType_other();
                break;
            case 19:
                typeModifierType_qualifiers();
                break;
            case 20:
                typeModifierType_storageDurationSpecifiers();
                break;
            case 21:
                cpp20SpecialType_concept();
                break;
            case 22:
                cpp20SpecialType_ranges();
                break;
            case 23:
                cpp20SpecialType_sourceLocation();
                break;
            case 24:
                cpp20SpecialType_coroutines();
                break;
            default:
                std::cout << "无效选择\n";
        }
    }

    void basicType_empty() {
        std::cout << "ch6 basicType_empty start";
    }
    
    void basicType_bool() {
        std::cout << "ch6 basicType_bool start";
    }
    
    void basicType_char() {
        std::cout << "ch6 basicType_char start";
    }
    
    void basicType_int() {
        std::cout << "ch6 basicType_int start";
    }
    
    void basicType_float() {
        std::cout << "ch6 basicType_float start";
    }
    
    void compoundType_reference() {
        std::cout << "ch6 compoundType_reference start";
    }
    
    void compoundType_pointer() {
        std::cout << "ch6 compoundType_pointer start";
    }
    
    void compoundType_array() {
        std::cout << "ch6 compoundType_array start";
    }
    
    void compoundType_function() {
        std::cout << "ch6 compoundType_function start";
    }
    
    void compoundType_enum() {
        std::cout << "ch6 compoundType_enum start";
    }
    
    void userDefineType_class() {
        std::cout << "ch6 userDefineType_class start";
    }
    
    void userDefineType_struct() {
        std::cout << "ch6 userDefineType_struct start";
    }
    
    void userDefineType_union() {
        std::cout << "ch6 userDefineType_union start";
    }
    
    void standardLibType_string() {
        std::cout << "ch6 standardLibType_string start";
    }
    
    void standardLibType_container() {
        std::cout << "ch6 standardLibType_container start";
    }
    
    void standardLibType_smartPointer() {
        std::cout << "ch6 standardLibType_smartPointer start";
    }
    
    void standardLibType_stream() {
        std::cout << "ch6 standardLibType_stream start";
    }
    
    void standardLibType_other() {
        std::cout << "ch6 standardLibType_other start";
    }
    
    void typeModifierType_qualifiers() {
        std::cout << "ch6 typeModifierType_qualifiers start";
    }
    
    void typeModifierType_storageDurationSpecifiers() {
        std::cout << "ch6 typeModifierType_storageDurationSpecifiers start";
    }
    
    void cpp20SpecialType_concept() {
        std::cout << "ch6 cpp20SpecialType_concept start";
    }
    
    void cpp20SpecialType_ranges() {
        std::cout << "ch6 cpp20SpecialType_ranges start";
    }
    
    void cpp20SpecialType_sourceLocation() {
        std::cout << "ch6 cpp20SpecialType_sourceLocation start";
    }
    
    void cpp20SpecialType_coroutines() {
        std::cout << "ch6 cpp20SpecialType_coroutines start";
    }
    

}

// 自动注册
REGISTER_CHAPTER(ch6, ch6::run);