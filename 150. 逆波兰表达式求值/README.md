# 150.逆波兰表达式求值

[题目：150. 逆波兰表达式求值](https://leetcode.cn/problems/evaluate-reverse-polish-notation/)

这道题是很典型的栈的应用，只需要将数字入栈，然后如果遇到了运算符，将栈顶的两个元素出栈运算，再把结果压入栈即可。

solution1.cpp中直接使用了stl库的栈，solution2.cpp中则用数组模拟了栈。