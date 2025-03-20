/**
 * @file chapter_runner.h
 * @author ragnor
 * @date 2025/3/18
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
// chapter_runner.h
#pragma once
#include <functional>
#include <map>
#include <string>

class ChapterRunner {
public:
 static ChapterRunner& getInstance();
 void registerChapter(const std::string& name, std::function<void()> runFunc);
 void runChapter(const std::string& name);
 void listAllChapters();

private:
 ChapterRunner() = default;
 std::map<std::string, std::function<void()>> chapters;
};

// 注册宏，简化章节注册
#define REGISTER_CHAPTER(name, func) \
static bool _registered_##name = []() { \
ChapterRunner::getInstance().registerChapter(#name, func); \
return true; \
}();