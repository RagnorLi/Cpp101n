/**
 * @file filetype_family.h
 * @author ragnor
 * @date 2025/3/20
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#pragma once

namespace ch4 {
    void groupBySourceModule();
    void groupByHeaderCategory();
    void groupByBuildStage();
    void groupByTargetPlatform();
    void groupByBuildConfig();
    void groupByPackageManager();
    void groupByDebugPhase();
    void groupByDocCategory();
    void groupByTest();
    void groupByResourceType();

    void run();
}