/**
 * @file type_conversion.h
 * @author ragnor
 * @date 2025/3/21
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#pragma once

namespace ch7 {

    void implicitConversion_promoteNumeric();
    void implicitConversion_convertNumericValue();
    void implicitConversion_castPointerType();
    void implicitConversion_convertReferenceType();
    void implicitConversion_invokeUserDefinedImplicit();

    void explicitConversion_CStyleCase();
    void explicitConversion_conversionOperator();
    void explicitConversion_triggerUserDefinedExplicit();

    void specialConversion_transferOwnershipViaMove();
    void specialConversion_manipulateTypeIdentity();
    void specialConversion_utilizeConversionUtilities();

    void typeSafeEnumConversion_convertScopedEnum();
    void typeSafeEnumConversion_convertUnscopedEnum();

    void stdConversionFunc_numericConversion();
    void stdConversionFunc_smartPointer();


    void run();
}