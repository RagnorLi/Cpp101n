/**
 * @file statement.cpp
 * @author ragnor
 * @date 2025/3/20
 * @brief 
 * @details 
 * @copyright Copyright (c) 2025 ragnor. All rights reserved.
 */
#include "statementImpl.h"
#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <algorithm>

namespace ch2 {

// 各种语句类型的具体实现类
class DeclarationStatements : public StatementDemo {
public:
    std::string getName() const override { return "声明语句"; }

    void execute() override {
        int x = 5;               // 整数变量声明
        double pi = 3.14159;     // 浮点数变量声明
        char grade = 'A';        // 字符变量声明
        bool isActive = true;    // 布尔变量声明
        std::string message = "Hello";// 字符串变量声明

        std::cout << "声明的变量: x = " << x
             << ", pi = " << pi
             << ", grade = " << grade
             << ", isActive = " << isActive
             << ", message = " << message << std::endl;

        // 常量声明
        const int MAX_VALUE = 100;
        std::cout << "声明的常量: MAX_VALUE = " << MAX_VALUE << std::endl;
    }
};

class JumpStatements : public StatementDemo {
public:
    std::string getName() const override { return "跳转语句"; }

    void execute() override {
        demonstrateReturn();
        demonstrateBreak();
    }

private:
    void demonstrateReturn() {
        std::cout << "演示return语句..." << std::endl;
        std::cout << "这条语句执行后，函数将立即返回" << std::endl;
        // 注: 在真实return示例中，我们不能真的在这里返回，因为需要继续执行
        std::cout << "在实际函数中，return会结束函数执行" << std::endl;
    }

    void demonstrateBreak() {
        std::cout << "演示break语句..." << std::endl;
        for (int i = 0; i < 10; i++) {
            if (i == 5) {
                std::cout << "遇到i == 5，break跳出循环" << std::endl;
                break;  // 跳出循环
            }
            std::cout << "循环中: i = " << i << std::endl;
        }
        std::cout << "循环已经结束" << std::endl;
    }
};

class SelectionStatements : public StatementDemo {
public:
    std::string getName() const override { return "选择语句"; }

    void execute() override {
        demoSelection(5);   // 正数
        demoSelection(-3);  // 负数
        demoSelection(0);   // 零
    }

private:
    void demoSelection(int number) {
        // if语句
        std::cout << "使用if语句判断" << number << "的性质: ";
        if (number > 0) {
            std::cout << "正数" << std::endl;
        } else if (number < 0) {
            std::cout << "负数" << std::endl;
        } else {
            std::cout << "零" << std::endl;
        }

        // switch语句
        std::cout << "使用switch语句判断" << number << "除以3的余数: ";
        switch (number % 3) {
            case 0:
                std::cout << "能被3整除" << std::endl;
                break;
            case 1:
                std::cout << "除以3余1" << std::endl;
                break;
            case 2:
            case -1:  // 处理负数情况
                std::cout << "除以3余2或-1" << std::endl;
                break;
            default:
                std::cout << "其他情况" << std::endl;
        }

        // 条件运算符（三元运算符）
        std::string result = (number % 2 == 0) ? "偶数" : "奇数";
        std::cout << "使用条件运算符判断" << number << "的奇偶性: " << result << std::endl;
    }
};

class IterationStatements : public StatementDemo {
public:
    std::string getName() const override { return "迭代语句"; }

    void execute() override {
        const int count = 3;

        // for循环
        std::cout << "for循环示例:" << std::endl;
        for (int i = 0; i < count; i++) {
            std::cout << "  循环次数: " << i+1 << std::endl;
        }

        // while循环
        std::cout << "while循环示例:" << std::endl;
        int j = 0;
        while (j < count) {
            std::cout << "  循环次数: " << j+1 << std::endl;
            j++;
        }

        // do-while循环
        std::cout << "do-while循环示例:" << std::endl;
        int k = 0;
        do {
            std::cout << "  循环次数: " << k+1 << std::endl;
            k++;
        } while (k < count);
    }
};

class LabeledAndGotoStatements : public StatementDemo {
public:
    std::string getName() const override { return "标签语句和Goto语句"; }

    void execute() override {
        int x = 1;

        // 标签和goto示例
        std::cout << "开始执行..." << std::endl;

        if (x == 1) {
            goto label_x;  // 跳转到标签处
        }

        std::cout << "这条语句不会被执行" << std::endl;

    label_x:  // 这是一个标签
        std::cout << "跳转到了label_x标签处" << std::endl;

        // 嵌套循环中使用goto跳出
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (i == 1 && j == 1) {
                    std::cout << "遇到i==1且j==1，使用goto跳出嵌套循环" << std::endl;
                    goto outer;
                }
                std::cout << "循环中: i = " << i << ", j = " << j << std::endl;
            }
        }
    outer:
        std::cout << "已经跳出所有循环" << std::endl;
    }
};

class ExpressionStatements : public StatementDemo {
public:
    std::string getName() const override { return "表达式语句"; }

    void execute() override {
        int x = 10;  // 赋值表达式
        std::cout << "赋值表达式: x = 10, 结果x = " << x << std::endl;

        x = x + 5;   // 复合赋值
        std::cout << "复合赋值: x = x + 5, 结果x = " << x << std::endl;

        x++;         // 自增
        std::cout << "自增表达式: x++, 结果x = " << x << std::endl;

        --x;         // 自减
        std::cout << "自减表达式: --x, 结果x = " << x << std::endl;

        int y = x * 2;  // 算术表达式
        std::cout << "算术表达式: y = x * 2, 结果y = " << y << std::endl;

        bool isEqual = (x == y);  // 比较表达式
        std::cout << "比较表达式: x == y, 结果 = " << (isEqual ? "true" : "false") << std::endl;

        bool logicalResult = (x > 10) && (y < 30);  // 逻辑表达式
        std::cout << "逻辑表达式: (x > 10) && (y < 30), 结果 = " << (logicalResult ? "true" : "false") << std::endl;

        std::cout << "Hello World";  // 输出表达式
        std::cout << std::endl;
    }
};

class CompoundStatements : public StatementDemo {
public:
    std::string getName() const override { return "复合语句"; }

    void execute() override {
        // 复合语句是用大括号括起来的多条语句
        {
            int x = 1;  // 这个x的作用域仅限于这个复合语句
            std::cout << "复合语句内部: x = " << x << std::endl;
            x = x + 10;
            std::cout << "复合语句内部: x = " << x << std::endl;
        }

        // 尝试访问上面复合语句中的x将导致编译错误
        // std::cout << "复合语句外部: x = " << x << std::endl;  // 错误：未声明的标识符

        std::cout << "复合语句通常用于创建局部作用域" << std::endl;

        // 在if, for, while等语句中的复合语句
        if (true) {
            int y = 20;  // 这个y的作用域仅限于这个if语句块
            std::cout << "if语句块内部: y = " << y << std::endl;
        }
        // y在这里不可见
    }
};

class ExceptionHandlingStatements : public StatementDemo {
public:
    std::string getName() const override { return "异常处理语句"; }

    void execute() override {
        // Try-Catch-Throw示例
        try {
            std::cout << "进入try块" << std::endl;

            int numerator = 10;
            int denominator = 0;

            if (denominator == 0) {
                std::cout << "检测到除数为0，抛出异常" << std::endl;
                throw std::string("除数不能为0");  // 抛出字符串类型异常
            }

            int result = numerator / denominator;  // 如果没有上面的检查，这会导致程序崩溃
            std::cout << "结果: " << result << std::endl;

            std::cout << "这条语句不会执行，因为已经抛出异常" << std::endl;
        }
        catch (std::string& e) {
            std::cout << "捕获到字符串异常: " << e << std::endl;
        }
        catch (int e) {
            std::cout << "捕获到整数异常: " << e << std::endl;
        }
        catch (...) {
            std::cout << "捕获到其他类型的异常" << std::endl;
        }

        // 嵌套try-catch示例
        try {
            std::cout << "外层try块" << std::endl;

            try {
                std::cout << "内层try块" << std::endl;
                throw 100;  // 抛出整数异常
                std::cout << "这条语句不会执行" << std::endl;
            }
            catch (double e) {
                std::cout << "内层catch块: 捕获到浮点数异常" << std::endl;
            }

            std::cout << "内层异常未被捕获，传播到外层" << std::endl;
        }
        catch (int e) {
            std::cout << "外层catch块: 捕获到整数异常: " << e << std::endl;
        }

        std::cout << "异常处理完成" << std::endl;
    }
};

class EmptyStatements : public StatementDemo {
public:
    std::string getName() const override { return "空语句"; }

    void execute() override {
        ;  // 这是一个空语句
        std::cout << "上面是一个空语句，它什么都不做" << std::endl;

        // 空语句的实际应用
        for(int i = 0; i < 3; i++);  // 有意使用空语句的循环
        std::cout << "使用空语句的for循环结束，循环体什么都没做" << std::endl;
    }
};

// 工厂函数 - 创建所有演示类的实例
std::vector<std::unique_ptr<StatementDemo>> createDemos() {
    std::vector<std::unique_ptr<StatementDemo>> demos;

    demos.push_back(std::make_unique<DeclarationStatements>());
    demos.push_back(std::make_unique<JumpStatements>());
    demos.push_back(std::make_unique<SelectionStatements>());
    demos.push_back(std::make_unique<IterationStatements>());
    demos.push_back(std::make_unique<LabeledAndGotoStatements>());
    demos.push_back(std::make_unique<ExpressionStatements>());
    demos.push_back(std::make_unique<CompoundStatements>());
    demos.push_back(std::make_unique<ExceptionHandlingStatements>());
    demos.push_back(std::make_unique<EmptyStatements>());

    return demos;
}

// 实现statement()函数 - 展示所有语句类型
void statementImpl() {
    std::cout << "===== C++语句类型演示 =====" << std::endl;

    auto demos = createDemos();
    for (size_t i = 0; i < demos.size(); ++i) {
        std::cout << "\n" << (i+1) << ". " << demos[i]->getName() << "演示:" << std::endl;
        demos[i]->execute();
    }
}

// 实现run()函数 - 程序入口
void enter() {
    std::cout << "开始C++语句类型演示程序..." << std::endl;
    statementImpl();
    std::cout << "\n演示程序结束。" << std::endl;
}

} // namespace ch2