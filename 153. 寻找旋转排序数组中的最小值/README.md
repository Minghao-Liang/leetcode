# 153.寻找旋转排序数组中的最小值

[题目：153. 寻找旋转排序数组中的最小值](https://leetcode.cn/problems/find-minimum-in-rotated-sorted-array/)

使用二分法，先判断mid位置的元素和最后一个元素的大小，如果mid位置的元素值小于最后一个元素，则证明最小的元素在左边，否则则在右边，重新划分区间后二分法继续查找即可。