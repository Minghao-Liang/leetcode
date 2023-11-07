# 141环形链表

[题目：141. 环形链表](https://leetcode.cn/problems/linked-list-cycle/)

该题只需要设置快慢指针即可，当两指针相等且不是空指针时，就存在环。

solution1.cpp和solution2.cpp是两个写法，都使用了双指针，但是2的写法在判断哪一个点是入环的第一个结点时更好用。