# 1557.可以到达所有点的最少点数目

[题目：1557. 可以到达所有点的最少点数目](https://leetcode.cn/problems/minimum-number-of-vertices-to-reach-all-nodes/)

观察发现，对于一个入度为0的结点，一定可以到达一个终点，遍历整个图所有的结点，从入度为0的结点一直走到尽头，则最后达到所有的结点，所以只需要找出入度为0的结点即可。