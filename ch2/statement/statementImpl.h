/**
 * @file statement.h
 * @author ragnor
 * @date 2025/3/20
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#pragma once
#include <memory>
#include <vector>
#include <string>

namespace ch2 {
    // 基类接口
    class StatementDemo {
    public:
        virtual ~StatementDemo() = default;
        virtual void execute() = 0;
        virtual std::string getName() const = 0;
    };

    // 注册所有演示并执行
    void statementImpl();

    // 运行整个程序
    void enter();
}