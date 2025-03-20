import re
import sys
import os
from datetime import datetime

def parse_header(header_path):
    with open(header_path, 'r') as f:
        content = f.read()

    # 提取元数据注释
    metadata_match = re.search(r'(/\*\*.*?\*/)', content, re.DOTALL)
    metadata = metadata_match.group(1) if metadata_match else None

    # 提取namespace名称
    namespace_match = re.search(r'namespace\s+(\w+)', content)
    namespace = namespace_match.group(1) if namespace_match else "unknown"

    # 提取函数声明
    function_matches = re.findall(r'void\s+(\w+)\(\);', content)
    functions = [f for f in function_matches if f != "run"]  # 排除run函数

    return namespace, functions, metadata

def generate_cpp_implementation(header_path, cpp_path):
    namespace, functions, metadata = parse_header(header_path)
    chapter_num = namespace.replace('ch', '')

    # 如果没有从头文件提取到元数据，则生成新的
    if not metadata:
        cpp_filename = os.path.basename(cpp_path)
        today = datetime.now().strftime('%Y/%m/%d')
        metadata = f'''/**
 * @file {cpp_filename}
 * @author ragnor
 * @date {today}
 * @brief 
 * @details 
 * @copyright Copyright (c) {datetime.now().year} ragnor. All rights reserved.
 */'''
    else:
        # 如果有提取到，则替换文件名
        cpp_filename = os.path.basename(cpp_path)
        metadata = re.sub(r'@file\s+[^\n]*', f'@file {cpp_filename}', metadata)
        # 更新日期为今天
        today = datetime.now().strftime('%Y/%m/%d')
        metadata = re.sub(r'@date\s+[^\n]*', f'@date {today}', metadata)

    # 生成新内容，以元数据开头
    header_name = os.path.basename(header_path).replace('.h', '')
    content = f'''{metadata}
#include "{header_name}.h"
#include "ch_runner.h"

#include <iostream>

namespace {namespace} {{
    void run() {{
        std::cout << "Running Chapter {chapter_num}...\\n";

        // 创建一个简单的菜单系统
'''

    # 添加菜单项
    for i, func in enumerate(functions, 1):
        content += f'        std::cout << "{i}. {func}\\n";\n'

    # 添加选择提示和switch结构
    content += f'''
        int choice;
        std::cout << "选择一个主题 (1-{len(functions)}): ";
        std::cin >> choice;

        switch (choice) {{
'''

    # 添加case语句
    for i, func in enumerate(functions, 1):
        content += f'''            case {i}:
                {func}();
                break;
'''

    content += '''            default:
                std::cout << "无效选择\\n";
        }
    }

'''

    # 添加函数实现
    for func in functions:
        content += f'''    void {func}() {{
        std::cout << "{namespace} {func} start";
    }}
    
'''
    # 添加namespace闭合
    content += f'''
}}
'''

    # 添加注册语句
    content += f'''
// 自动注册
REGISTER_CHAPTER({namespace}, {namespace}::run);'''

    # 写入文件
    with open(cpp_path, 'w') as f:
        f.write(content)

    print(f"已生成 {cpp_path}，包含 {len(functions)} 个函数实现")

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("用法: python generate_cpp_impl.py <header_file.h> <cpp_file.cpp>")
        sys.exit(1)

    header_path = sys.argv[1]
    cpp_path = sys.argv[2]

    generate_cpp_implementation(header_path, cpp_path)