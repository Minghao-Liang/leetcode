# 112.路径总和

[题目：112. 路径总和](https://leetcode.cn/problems/path-sum/)

DFS法：如果本结点是叶子结点，判断val是否等于目标值。从根结点开始递归，每次递归的目标值是当前目标值减去当前结点的val值。具体见solution1.cpp。

BFS法：使用两个队列，分别存储结点和当前的路径，每次遇到叶子结点判断路径是否等于目标路径即可。具体见solution2.cpp。