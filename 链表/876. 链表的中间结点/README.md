# 876.链表的中间结点

[题目：876. 链表的中间结点](https://leetcode.cn/problems/middle-of-the-linked-list/)

该题最简单的想法是遍历一遍后知道链表中结点的数目n，然后再遍历到第n/2个元素即可（首结点为第0个），但是这需要比一趟遍历多，可以用快慢指针优化。快指针每次移动两步，慢指针每次移动一步，当快指针走到最后时，慢指针自然就在中间结点处了。