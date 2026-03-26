# First-Visual-Studio-code
  这是我的第一个Visual Studio + Github项目
# 主要用途
  练习 Git 基本操作：克隆、提交、推送
  学习在 Visual Studio 中编写代码并同步到 GitHub
  作为后续编程学习的起点
# 编程语言
  目前是C++，未来可能会添加 Python、JavaScript 等
# 学习记录
  2026-3-14白情：成功克隆仓库到VS2026
  2026-3-19 ：学习了《C++经典入门（第十版）》第一章，用cout语句成功打印出“CS！！”图案
  2026-3-21：学习了《C++经典入门（第十版）》第二章：
              1、认识转义序列：
	             \n：换行
	             \t：水平制表符（Tab）
	             \\：反斜杠
	             \"：双引号
	             使用原始字符串字面值：cout<<R"(c:\files\)";
			  2、格式化小数位数：
				 使用iomanip库（头文件#include<iomanip>）中的setprecision函数：cout<<fixed<<setprecision(2)<<3.14159; // 输出3.14
				 使用科学计数法：cout<<scientific<<3.14159; // 输出3.141590e+00
				 使用默认格式：cout<<defaultfloat<<3.14159; // 输出3.14159
				 （cout.setf(ios::fixed);
				   cout.setf(ios::showpoint);
				   cout.precision(2);）
			  3、通过cin输入读入char类型的变量时，计算机会忽略输入中的空格、制表符和换行符，直到遇到一个非空白字符为止。
			     通过cin输入的内容读入string变量时，遇到空白字符会停止读入。
			  4、Variable Op= Expression —— Variable = Variable Op Expression
				 例如：a += 5; // 等价于 a = a + 5;
			  5、do-while循环的循环主体至少执行一次。
			  6、修饰符const声明的变量称为声明常量。
  2026-3-22: 练习第二章编程题：
             1、将double值转换为int类型：使用static_cast<int>(doubleValue);
  2026-3-26：完成第二章编程题。