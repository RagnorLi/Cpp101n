/**
 * @file filetype_family.cpp
 * @author ragnor
 * @date 2025/03/20
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include "filetype_family.h"
#include "ch_runner.h"

#include <iostream>

namespace ch4 {
    void run() {
        std::cout << "Running Chapter 4...\n";

        // 创建菜单系统
        std::cout << "1. 源代码文件\n";
        std::cout << "2. 头文件\n";
        std::cout << "3. 编译过程文件\n";
        std::cout << "4. 库和可执行文件\n";
        std::cout << "5. 项目和构建系统文件\n";
        std::cout << "6. 包管理和依赖文件\n";
        std::cout << "7. 调试和分析文件\n";
        std::cout << "8. 文档和元数据文件\n";
        std::cout << "9. 测试相关文件\n";
        std::cout << "10. 资源文件\n";

        int choice;
        std::cout << "选择一个主题 (1-10): ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                groupBySourceModule();
                break;
            case 2:
                groupByHeaderCategory();
                break;
            case 3:
                groupByBuildStage();
                break;
            case 4:
                groupByTargetPlatform();
                break;
            case 5:
                groupByBuildConfig();
                break;
            case 6:
                groupByPackageManager();
                break;
            case 7:
                groupByDebugPhase();
                break;
            case 8:
                groupByDocCategory();
                break;
            case 9:
                groupByTest();
                break;
            case 10:
                groupByResourceType();
                break;
            default:
                std::cout << "无效选择\n";
        }
    }

    void groupBySourceModule() {
        std::cout << "ch4 groupBySourceModule start";
    }
    
    void groupByHeaderCategory() {
        std::cout << "ch4 groupByHeaderCategory start";
    }
    
    void groupByBuildStage() {
        std::cout << "ch4 groupByBuildStage start";
    }
    
    void groupByTargetPlatform() {
        std::cout << "ch4 groupByTargetPlatform start";
    }
    
    void groupByBuildConfig() {
        std::cout << "ch4 groupByBuildConfig start";
    }
    
    void groupByPackageManager() {
        std::cout << "ch4 groupByPackageManager start";
    }
    
    void groupByDebugPhase() {
        std::cout << "ch4 groupByDebugPhase start";
    }
    
    void groupByDocCategory() {
        std::cout << "ch4 groupByDocCategory start";
    }
    
    void groupByTest() {
        std::cout << "ch4 groupByTest start";
    }
    
    void groupByResourceType() {
        std::cout << "ch4 groupByResourceType start";
    }
    

}

// 自动注册
REGISTER_CHAPTER(ch4, ch4::run);