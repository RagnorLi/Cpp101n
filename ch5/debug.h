/**
 * @file bug_debug.h
 * @author ragnor
 * @date 2025/3/20
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#pragma once

namespace ch5 {
    void memoryError_leak();
    void memoryError_bufferOverflow();
    void memoryError_danglingPointer();

    void concurrencyError_dataRace();
    void concurrencyError_deadlock();

    void semanticError_undefinedBehavior();
    void semanticError_typeConversion();

    void resourceError_fileHandleLeak();
    void resourceError_exceptionSafety();

    void logicError_boundaryCondition();
    void logicError_algorithmImplementation();

    void modernCppError_smartPointers();
    void modernCppError_perfectForwarding();

    void performanceIssue_cacheUnfriendly();
    void performanceIssue_excessiveAllocation();

    void buildError_symbolConflict();
    void buildError_libraryDependency();

    void templateError_instantiation();
    void templateError_metaprogramming();

    void valueCategories_moveSemantics();
    void valueCategories_refQualifiers();

    void memoryLayout_structPadding();
    void memoryLayout_serialization();

    void platformCompatibility_compilerDifferences();
    void platformCompatibility_specificIssues();

    void debugTools_gdbAdvanced();
    void debugTools_assertionTechniques();


    void run();
}
