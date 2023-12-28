# 445.两数相加 II

[题目：445. 两数相加 II](https://leetcode.cn/problems/add-two-numbers-ii/)

这道题和 [2. 两数相加](https://leetcode.cn/problems/add-two-numbers/) 相比的不同之处是逆序，所以可以加入 [206. 反转链表](https://leetcode.cn/problems/reverse-linked-list/) 中的反转操作，先将两个链表反转，使用 [2. 两数相加](https://leetcode.cn/problems/add-two-numbers/) 的方法进行相加之后，再反转回来即可。