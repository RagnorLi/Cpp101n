// main.cpp
#include "chapter_runner.h"
#include <iostream>

// 只需在编译时包含所有章节实现文件，不需要在此包含头文件
// 编译器会确保所有章节被正确链接

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Available chapters:\n";
        ChapterRunner::getInstance().listAllChapters();
        return 0;
    }
    
    std::string chapterName = argv[1];
    try {
        ChapterRunner::getInstance().runChapter(chapterName);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    
    return 0;
}