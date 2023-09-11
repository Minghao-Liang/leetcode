# 1491.去掉最低工资和最高工资后的工资平均值

[题目：1491. 去掉最低工资和最高工资后的工资平均值](https://leetcode.cn/problems/average-salary-excluding-the-minimum-and-maximum-salary/)

solution1.cpp用的是先排序，然后再遍历过程中不遍历第一个（最小值）和最后一个元素（最大值），求和后再求平均即可。

solution2.cpp不使用排序，遍历过程中同步记录最大值和最小值，最后求和去掉。