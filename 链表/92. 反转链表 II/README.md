# 92.反转链表 II

[题目：92. 反转链表 II](https://leetcode.cn/problems/reverse-linked-list-ii/)

这道题首先需要借鉴[206. 反转链表](https://leetcode.cn/problems/reverse-linked-list/)的做法，将中间的链表反转，只需要先定位到中间链表的头和尾，然后将其断开成为独立的链表，反转之后，再链接回原来的链表中。建议在原来的链表头结点之前添加一个哑结点，防止从头结点反转时，返回出现问题。