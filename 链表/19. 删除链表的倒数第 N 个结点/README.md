# 19.删除链表的倒数第N个节点

[题目：19. 删除链表的倒数第 N 个结点](https://leetcode.cn/problems/remove-nth-node-from-end-of-list/)

solution1.cpp中使用了常规解法，先计算链表的长度，再通过长度和n计算需要删除节点的前驱节点。然后进行第二遍扫描，在需要删除节点的前驱节点处，将next指针指向删除节点的下一个节点，完成删除。此外还需要对删除头节点的特殊情况进行判断，也可以在头节点前面加一个哑节点来规避判断。该方法扫描了两遍，并不是最优。

为了达到只扫描一遍的高效算法，solution2.cpp中使用了双指针。将第一个指针先前进n步，再双指针同步前进，当第一个指针指向达到尽头（即指向空时），第二个指针的位置在要被删除的节点处，为了方便删除，使其到达前驱节点，可以在头节点前面加一个哑节点，第二个节点从哑节点出发。如果删除的是头节点，最后只需要将头节点置为哑节点的下一个节点即可，无需额外判断。最后记得删除哑节点。