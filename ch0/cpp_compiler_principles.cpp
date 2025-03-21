/**
 * @file cpp_compiler_principles.cpp
 * @author ragnor
 * @date 2025/03/21
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include "cpp_compiler_principles.h"
#include "ch_runner.h"

#include <iostream>

namespace ch0 {
    void run() {
        std::cout << "Running Chapter 0...\n";

        // 创建一个简单的菜单系统
        std::cout << "1. 编译阶段-预处理\n";
        std::cout << "2. 编译阶段-词法分析\n";
        std::cout << "3. 编译阶段-语法分析\n";
        std::cout << "4. 编译阶段-语义分析\n";
        std::cout << "5. 编译阶段-中间代码生成\n";
        std::cout << "6. 编译阶段-优化\n";
        std::cout << "7. 编译阶段-代码生成\n";
        std::cout << "8. 编译阶段-汇编和链接\n";
        std::cout << "9. 编译关键点-名称修饰\n";
        std::cout << "10. 编译关键点-模版处理\n";
        std::cout << "11. 编译关键点-内存模型\n";
        std::cout << "12. 编译关键点-符号解析与连接\n";
        std::cout << "13. 开发编译器-前端技术\n";
        std::cout << "14. 开发编译器-中间表示形式\n";
        std::cout << "15. 开发编译器-类型系统实现\n";
        std::cout << "16. 开发编译器-优化实现技术\n";
        std::cout << "17. 现代C++编译器核心挑战-复杂语言特性\n";
        std::cout << "18. 现代C++编译器核心挑战-编译时计算\n";
        std::cout << "19. 现代C++编译器核心挑战-并行编译\n";

        int choice;
        std::cout << "选择一个主题 (1-19): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                compilerStage_preprocessing();
                break;
            case 2:
                compilerStage_lexicalAnalysis();
                break;
            case 3:
                compilerStage_syntaxAnalysis();
                break;
            case 4:
                compilerStage_semanticAnalysis();
                break;
            case 5:
                compilerStage_IR_generation();
                break;
            case 6:
                compilerStage_optimization();
                break;
            case 7:
                compilerStage_codeGeneration();
                break;
            case 8:
                compilerStage_assemblyAndLinking();
                break;
            case 9:
                compilerCoreTec_nameMangling();
                break;
            case 10:
                compilerCoreTec_templateHandler();
                break;
            case 11:
                compilerCoreTec_memoryModel();
                break;
            case 12:
                compilerCoreTec_symbolResolutionAndLinking();
                break;
            case 13:
                devACompiler_frontTec();
                break;
            case 14:
                devACompiler_intermediateRepresentation();
                break;
            case 15:
                devACompiler_typeSystemImplementation();
                break;
            case 16:
                devACompiler_optimizationImplementationTec();
                break;
            case 17:
                modernCppCompilerChallenge_handleAdvancedLanguageFeatures();
                break;
            case 18:
                modernCppCompilerChallenge_compilerTimeEvaluate();
                break;
            case 19:
                modernCppCompilerChallenge_parallelCompilationStrategies();
                break;
            default:
                std::cout << "无效选择\n";
        }
    }

    void compilerStage_preprocessing() {
        std::cout << "ch0 compilerStage_preprocessing start";
    }
    
    void compilerStage_lexicalAnalysis() {
        std::cout << "ch0 compilerStage_lexicalAnalysis start";
    }
    
    void compilerStage_syntaxAnalysis() {
        std::cout << "ch0 compilerStage_syntaxAnalysis start";
    }
    
    void compilerStage_semanticAnalysis() {
        std::cout << "ch0 compilerStage_semanticAnalysis start";
    }
    
    void compilerStage_IR_generation() {
        std::cout << "ch0 compilerStage_IR_generation start";
    }
    
    void compilerStage_optimization() {
        std::cout << "ch0 compilerStage_optimization start";
    }
    
    void compilerStage_codeGeneration() {
        std::cout << "ch0 compilerStage_codeGeneration start";
    }
    
    void compilerStage_assemblyAndLinking() {
        std::cout << "ch0 compilerStage_assemblyAndLinking start";
    }
    
    void compilerCoreTec_nameMangling() {
        std::cout << "ch0 compilerCoreTec_nameMangling start";
    }
    
    void compilerCoreTec_templateHandler() {
        std::cout << "ch0 compilerCoreTec_templateHandler start";
    }
    
    void compilerCoreTec_memoryModel() {
        std::cout << "ch0 compilerCoreTec_memoryModel start";
    }
    
    void compilerCoreTec_symbolResolutionAndLinking() {
        std::cout << "ch0 compilerCoreTec_symbolResolutionAndLinking start";
    }
    
    void devACompiler_frontTec() {
        std::cout << "ch0 devACompiler_frontTec start";
    }
    
    void devACompiler_intermediateRepresentation() {
        std::cout << "ch0 devACompiler_intermediateRepresentation start";
    }
    
    void devACompiler_typeSystemImplementation() {
        std::cout << "ch0 devACompiler_typeSystemImplementation start";
    }
    
    void devACompiler_optimizationImplementationTec() {
        std::cout << "ch0 devACompiler_optimizationImplementationTec start";
    }
    
    void modernCppCompilerChallenge_handleAdvancedLanguageFeatures() {
        std::cout << "ch0 modernCppCompilerChallenge_handleAdvancedLanguageFeatures start";
    }
    
    void modernCppCompilerChallenge_compilerTimeEvaluate() {
        std::cout << "ch0 modernCppCompilerChallenge_compilerTimeEvaluate start";
    }
    
    void modernCppCompilerChallenge_parallelCompilationStrategies() {
        std::cout << "ch0 modernCppCompilerChallenge_parallelCompilationStrategies start";
    }
    

}

// 自动注册
REGISTER_CHAPTER(ch0, ch0::run);