# 34.在排序数组中查找元素的第一个和最后一个位置

[题目：34. 在排序数组中查找元素的第一个和最后一个位置](https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array/)

使用二分查找来界定边界，对于左边界，寻找到第一个大于等于target的数，则得到左边界，右边界同理。