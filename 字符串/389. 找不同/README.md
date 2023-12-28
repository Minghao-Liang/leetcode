# 389.找不同

[题目：389. 找不同](https://leetcode.cn/problems/find-the-difference/)

只需要建立一个数组作为哈希表，记录s中每个字符出现的次数，然后在遍历t时减一次次数，最后出现次数小于0的就是添加的字符。