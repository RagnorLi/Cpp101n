/**
 * @file type_conversion.cpp
 * @author ragnor
 * @date 2025/03/21
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include "type_conversion.h"
#include "ch_runner.h"

#include <iostream>

namespace ch7 {
    void run() {
        std::cout << "Running Chapter 7...\n";

        // 创建菜单系统
        std::cout << "1. 隐式类型转换-数值提升\n";
        std::cout << "2. 隐式类型转换-数值转换\n";
        std::cout << "3. 隐式类型转换-指针转换\n";
        std::cout << "4. 隐式类型转换-引用转换\n";
        std::cout << "5. 隐式类型转换-用户定义的隐式转换\n";
        std::cout << "6. 显式类型转换-C风格强制转换\n";
        std::cout << "7. 显式类型转换-C++ 风格\n";
        std::cout << "8. 显式类型转换-用户定义的显示转换\n";
        std::cout << "9. 特殊类型转换机制-移动语义相关\n";
        std::cout << "10. 特殊类型转换机制-类型操作相关\n";
        std::cout << "11. 特殊类型转换机制-其他转换工具\n";
        std::cout << "12. 类型安全的枚举转换-有作用域枚举转换\n";
        std::cout << "13. 类型安全的枚举转换-无作用域枚举转换\n";
        std::cout << "14. 标准库转换函数-数值转换\n";
        std::cout << "15. 标准库转换函数-智能指针转换\n";

        int choice;
        std::cout << "选择一个主题 (1-15): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                implicitConversion_promoteNumeric();
                break;
            case 2:
                implicitConversion_convertNumericValue();
                break;
            case 3:
                implicitConversion_castPointerType();
                break;
            case 4:
                implicitConversion_convertReferenceType();
                break;
            case 5:
                implicitConversion_invokeUserDefinedImplicit();
                break;
            case 6:
                explicitConversion_CStyleCase();
                break;
            case 7:
                explicitConversion_conversionOperator();
                break;
            case 8:
                explicitConversion_triggerUserDefinedExplicit();
                break;
            case 9:
                specialConversion_transferOwnershipViaMove();
                break;
            case 10:
                specialConversion_manipulateTypeIdentity();
                break;
            case 11:
                specialConversion_utilizeConversionUtilities();
                break;
            case 12:
                typeSafeEnumConversion_convertScopedEnum();
                break;
            case 13:
                typeSafeEnumConversion_convertUnscopedEnum();
                break;
            case 14:
                stdConversionFunc_numericConversion();
                break;
            case 15:
                stdConversionFunc_smartPointer();
                break;
            default:
                std::cout << "无效选择\n";
        }
    }

    void implicitConversion_promoteNumeric() {
        std::cout << "ch7 implicitConversion_promoteNumeric start";
    }
    
    void implicitConversion_convertNumericValue() {
        std::cout << "ch7 implicitConversion_convertNumericValue start";
    }
    
    void implicitConversion_castPointerType() {
        std::cout << "ch7 implicitConversion_castPointerType start";
    }
    
    void implicitConversion_convertReferenceType() {
        std::cout << "ch7 implicitConversion_convertReferenceType start";
    }
    
    void implicitConversion_invokeUserDefinedImplicit() {
        std::cout << "ch7 implicitConversion_invokeUserDefinedImplicit start";
    }
    
    void explicitConversion_CStyleCase() {
        std::cout << "ch7 explicitConversion_CStyleCase start";
    }
    
    void explicitConversion_conversionOperator() {
        std::cout << "ch7 explicitConversion_conversionOperator start";
    }
    
    void explicitConversion_triggerUserDefinedExplicit() {
        std::cout << "ch7 explicitConversion_triggerUserDefinedExplicit start";
    }
    
    void specialConversion_transferOwnershipViaMove() {
        std::cout << "ch7 specialConversion_transferOwnershipViaMove start";
    }
    
    void specialConversion_manipulateTypeIdentity() {
        std::cout << "ch7 specialConversion_manipulateTypeIdentity start";
    }
    
    void specialConversion_utilizeConversionUtilities() {
        std::cout << "ch7 specialConversion_utilizeConversionUtilities start";
    }
    
    void typeSafeEnumConversion_convertScopedEnum() {
        std::cout << "ch7 typeSafeEnumConversion_convertScopedEnum start";
    }
    
    void typeSafeEnumConversion_convertUnscopedEnum() {
        std::cout << "ch7 typeSafeEnumConversion_convertUnscopedEnum start";
    }
    
    void stdConversionFunc_numericConversion() {
        std::cout << "ch7 stdConversionFunc_numericConversion start";
    }
    
    void stdConversionFunc_smartPointer() {
        std::cout << "ch7 stdConversionFunc_smartPointer start";
    }
    

}

// 自动注册
REGISTER_CHAPTER(ch7, ch7::run);