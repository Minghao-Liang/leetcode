# 94.二叉树的中序遍历

[题目：94. 二叉树的中序遍历](https://leetcode.cn/problems/binary-tree-inorder-traversal/)

有递归和迭代两种方法，递归和迭代的时间复杂度和空间复杂度都是线性的。然而还可以做到空间复杂度是常数级的，这个方法就是Morris遍历，由 J. H. Morris 在 1979 年的论文 *Traversing Binary Trees Simply and Cheaply* 中首次提出。

solution1.cpp是递归法，solution2.cpp是迭代法。