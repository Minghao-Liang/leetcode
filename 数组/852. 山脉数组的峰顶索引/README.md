# 852.山脉数组的峰顶索引

[题目：852. 山脉数组的峰顶索引](https://leetcode.cn/problems/peak-index-in-a-mountain-array/)

使用二分查找定位峰顶。如果mid+1的元素大于mid的元素，证明峰顶在右边，则继续往右进行查找，如果不是，则峰顶可能在左边或者就是当前mid索引的元素，往左边查找，最后返回右边界即可。