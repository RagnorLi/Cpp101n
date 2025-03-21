/**
 * @file cpp_complier_principles.h
 * @author ragnor
 * @date 2025/3/21
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#pragma once

namespace ch0 {
    void compilerStage_preprocessing();
    void compilerStage_lexicalAnalysis();
    void compilerStage_syntaxAnalysis();
    void compilerStage_semanticAnalysis();
    void compilerStage_IR_generation();
    void compilerStage_optimization();
    void compilerStage_codeGeneration();
    void compilerStage_assemblyAndLinking();

    void compilerCoreTec_nameMangling();
    void compilerCoreTec_templateHandler();
    void compilerCoreTec_memoryModel();
    void compilerCoreTec_symbolResolutionAndLinking();

    void devACompiler_frontTec();
    void devACompiler_intermediateRepresentation();
    void devACompiler_typeSystemImplementation();
    void devACompiler_optimizationImplementationTec();

    void modernCppCompilerChallenge_handleAdvancedLanguageFeatures();
    void modernCppCompilerChallenge_compilerTimeEvaluate();
    void modernCppCompilerChallenge_parallelCompilationStrategies();

    void run();
}

