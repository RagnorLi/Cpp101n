/**
 * @file variable_management_system.h
 * @author ragnor
 * @date 2025/3/21
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#pragma once


namespace ch9 {
    void variableLifeStage_declaration();
    void variableLifeStage_memoryAllocation();
    void variableLifeStage_init();
    void variableLifeStage_work();
    void variableLifeStage_destroy();

    void differentVariableLifePath_auto();
    void differentVariableLifePath_staticLocal();
    void differentVariableLifePath_global();
    void differentVariableLifePath_dynamic();
    void differentVariableLifePath_smartPointer();

    void bestPractice_RAII();
    void bestPractice_smartPointer();
    void bestPractice_move();
    void bestPractice_init();
    void bestPractice_threadSafety();


    void run();
}