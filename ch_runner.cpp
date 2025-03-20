/**
 * @file chapter_runner.cpp
 * @author ragnor
 * @date 2025/3/18
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include "ch_runner.h"

ChapterRunner& ChapterRunner::getInstance() {
 static ChapterRunner instance;
 return instance;
}

void ChapterRunner::registerChapter(const std::string& name, std::function<void()> runFunc) {
 // 检查是否已存在
 if (chapters.find(name) != chapters.end()) {
  std::cerr << "Warning: Chapter '" << name << "' already registered. Overwriting.\n";
 }
 chapters[name] = std::move(runFunc);
}

void ChapterRunner::runChapter(const std::string& name) {
 auto it = chapters.find(name);
 if (it == chapters.end()) {
  throw std::runtime_error("Chapter '" + name + "' not found");
 }

 // 执行章节运行函数
 std::cout << "=== Running Chapter: " << name << " ===\n";
 it->second();
 std::cout << "=== Chapter " << name << " completed ===\n";
}

void ChapterRunner::listAllChapters() {
 if (chapters.empty()) {
  std::cout << "No chapters registered.\n";
  return;
 }

 // 获取所有章节名并排序，方便查看
 std::vector<std::string> chapterNames;
 chapterNames.reserve(chapters.size());

 for (const auto& pair : chapters) {
  chapterNames.push_back(pair.first);
 }

 std::sort(chapterNames.begin(), chapterNames.end());

 // 打印排序后的章节列表
 for (const auto& name : chapterNames) {
  std::cout << "  - " << name << "\n";
 }
}