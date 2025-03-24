/**
 * @file llm.cpp
 * @author ragnor
 * @date 2025/03/24
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include "llm.h"
#include "ch_runner.h"

#include <iostream>

namespace ch20 {
    void run() {
        std::cout << "Running Chapter 20...\n";

        // 创建菜单系统
        std::cout << "1. 推理引擎与运行时-基础推理引擎\n";
        std::cout << "2. 推理引擎与运行时-大模型专用引擎\n";
        std::cout << "3. 推理引擎与运行时-高性能计算库\n";
        std::cout << "4. 量化与优化工具-模型量化\n";
        std::cout << "5. 量化与优化工具-内存优化\n";
        std::cout << "6. 量化与优化工具-运算优化\n";
        std::cout << "7. 硬件加速接口-GPU加速\n";
        std::cout << "8. 硬件加速接口-CPU优化\n";
        std::cout << "9. 硬件加速接口-专用加速器\n";
        std::cout << "10. 分布式训练与推理-通信库\n";
        std::cout << "11. 分布式训练与推理-分布式框架\n";
        std::cout << "12. 分布式训练与推理-编排系统\n";
        std::cout << "13. 模型集成与接口-与Python生态集成\n";
        std::cout << "14. 模型集成与接口-Web服务接口\n";
        std::cout << "15. 模型集成与接口-跨语言接口\n";
        std::cout << "16. 开发与调试工具-分析工具\n";
        std::cout << "17. 开发与调试工具-调试工具\n";
        std::cout << "18. 开发与调试工具-CI/CD工具\n";
        std::cout << "19. 实际应用与案例-边缘设备部署\n";
        std::cout << "20. 实际应用与案例-服务器部署\n";
        std::cout << "21. 实际应用与案例-垂直行业应用\n";
        std::cout << "22. 性能基准与评估-推理速度\n";
        std::cout << "23. 性能基准与评估-内存效率\n";
        std::cout << "24. 性能基准与评估-比较框架\n";

        int choice;
        std::cout << "选择一个主题 (1-24): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                inferenceEnginesRuntimes_basicInferenceEngines();
                break;
            case 2:
                inferenceEnginesRuntimes_largeModelSpecificEngines();
                break;
            case 3:
                inferenceEnginesRuntimes_highPerformanceComputingLibraries();
                break;
            case 4:
                quantizationOptimizationTools_modelQuantization();
                break;
            case 5:
                quantizationOptimizationTools_memoryOptimization();
                break;
            case 6:
                quantizationOptimizationTools_computationOptimization();
                break;
            case 7:
                hardwareAccelerationInterfaces_gpuAcceleration();
                break;
            case 8:
                hardwareAccelerationInterfaces_cpuOptimization();
                break;
            case 9:
                hardwareAccelerationInterfaces_specializedAccelerators();
                break;
            case 10:
                distributedTrainingInference_communicationLibraries();
                break;
            case 11:
                distributedTrainingInference_distributedFrameworks();
                break;
            case 12:
                distributedTrainingInference_orchestrationSystems();
                break;
            case 13:
                modelIntegrationInterfaces_pythonEcosystemIntegration();
                break;
            case 14:
                modelIntegrationInterfaces_webServiceInterfaces();
                break;
            case 15:
                modelIntegrationInterfaces_crossLanguageInterfaces();
                break;
            case 16:
                developmentDebuggingTools_profilingTools();
                break;
            case 17:
                developmentDebuggingTools_debuggingTools();
                break;
            case 18:
                developmentDebuggingTools_cicdTools();
                break;
            case 19:
                practicalApplicationsCaseStudies_edgeDeviceDeployment();
                break;
            case 20:
                practicalApplicationsCaseStudies_serverDeployment();
                break;
            case 21:
                practicalApplicationsCaseStudies_verticalIndustryApplications();
                break;
            case 22:
                performanceBenchmarksEvaluation_inferenceSpeed();
                break;
            case 23:
                performanceBenchmarksEvaluation_memoryEfficiency();
                break;
            case 24:
                performanceBenchmarksEvaluation_comparativeFrameworks();
                break;
            default:
                std::cout << "无效选择\n";
        }
    }

    void inferenceEnginesRuntimes_basicInferenceEngines() {
        std::cout << "ch20 inferenceEnginesRuntimes_basicInferenceEngines start";
    }
    
    void inferenceEnginesRuntimes_largeModelSpecificEngines() {
        std::cout << "ch20 inferenceEnginesRuntimes_largeModelSpecificEngines start";
    }
    
    void inferenceEnginesRuntimes_highPerformanceComputingLibraries() {
        std::cout << "ch20 inferenceEnginesRuntimes_highPerformanceComputingLibraries start";
    }
    
    void quantizationOptimizationTools_modelQuantization() {
        std::cout << "ch20 quantizationOptimizationTools_modelQuantization start";
    }
    
    void quantizationOptimizationTools_memoryOptimization() {
        std::cout << "ch20 quantizationOptimizationTools_memoryOptimization start";
    }
    
    void quantizationOptimizationTools_computationOptimization() {
        std::cout << "ch20 quantizationOptimizationTools_computationOptimization start";
    }
    
    void hardwareAccelerationInterfaces_gpuAcceleration() {
        std::cout << "ch20 hardwareAccelerationInterfaces_gpuAcceleration start";
    }
    
    void hardwareAccelerationInterfaces_cpuOptimization() {
        std::cout << "ch20 hardwareAccelerationInterfaces_cpuOptimization start";
    }
    
    void hardwareAccelerationInterfaces_specializedAccelerators() {
        std::cout << "ch20 hardwareAccelerationInterfaces_specializedAccelerators start";
    }
    
    void distributedTrainingInference_communicationLibraries() {
        std::cout << "ch20 distributedTrainingInference_communicationLibraries start";
    }
    
    void distributedTrainingInference_distributedFrameworks() {
        std::cout << "ch20 distributedTrainingInference_distributedFrameworks start";
    }
    
    void distributedTrainingInference_orchestrationSystems() {
        std::cout << "ch20 distributedTrainingInference_orchestrationSystems start";
    }
    
    void modelIntegrationInterfaces_pythonEcosystemIntegration() {
        std::cout << "ch20 modelIntegrationInterfaces_pythonEcosystemIntegration start";
    }
    
    void modelIntegrationInterfaces_webServiceInterfaces() {
        std::cout << "ch20 modelIntegrationInterfaces_webServiceInterfaces start";
    }
    
    void modelIntegrationInterfaces_crossLanguageInterfaces() {
        std::cout << "ch20 modelIntegrationInterfaces_crossLanguageInterfaces start";
    }
    
    void developmentDebuggingTools_profilingTools() {
        std::cout << "ch20 developmentDebuggingTools_profilingTools start";
    }
    
    void developmentDebuggingTools_debuggingTools() {
        std::cout << "ch20 developmentDebuggingTools_debuggingTools start";
    }
    
    void developmentDebuggingTools_cicdTools() {
        std::cout << "ch20 developmentDebuggingTools_cicdTools start";
    }
    
    void practicalApplicationsCaseStudies_edgeDeviceDeployment() {
        std::cout << "ch20 practicalApplicationsCaseStudies_edgeDeviceDeployment start";
    }
    
    void practicalApplicationsCaseStudies_serverDeployment() {
        std::cout << "ch20 practicalApplicationsCaseStudies_serverDeployment start";
    }
    
    void practicalApplicationsCaseStudies_verticalIndustryApplications() {
        std::cout << "ch20 practicalApplicationsCaseStudies_verticalIndustryApplications start";
    }
    
    void performanceBenchmarksEvaluation_inferenceSpeed() {
        std::cout << "ch20 performanceBenchmarksEvaluation_inferenceSpeed start";
    }
    
    void performanceBenchmarksEvaluation_memoryEfficiency() {
        std::cout << "ch20 performanceBenchmarksEvaluation_memoryEfficiency start";
    }
    
    void performanceBenchmarksEvaluation_comparativeFrameworks() {
        std::cout << "ch20 performanceBenchmarksEvaluation_comparativeFrameworks start";
    }
    

}

// 自动注册
REGISTER_CHAPTER(ch20, ch20::run);