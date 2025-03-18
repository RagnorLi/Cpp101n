/**
 * @file step_01_enjoy.cpp
 * @author ragnor
 * @date 2025/3/18
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include "step_01_enjoy.h"
#include "../chapter_runner.h"
#include <iostream>

namespace chapter01 {




 void run() {
  std::cout << "Running Chapter 01...\n";
  // 章节具体实现
 }
}

// 自动注册
REGISTER_CHAPTER(chapter01, chapter01::run);