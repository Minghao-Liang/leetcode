# 203.移除链表元素

[题目：203. 移除链表元素](https://leetcode.cn/problems/remove-linked-list-elements/)

solution1.cpp中使用迭代的方法，考虑到删除的结点可能是头结点的情况，在头结点前面建立了一个哑结点开始遍历，遇到与val值相等的结点则删除，如果是头结点相等，则把头结点后移。

solution2.cpp使用的是递归的方法，先判断头结点以外的结点，最后考虑头结点相等时的处理，可以递归实现。