##Leetcode 779. K-th Symbol in Grammar

#Problem Statement: 
# We build a table of n rows (1-indexed). We start by writing 0 in the 1st row. Now in every subsequent row, we look at the previous row and replace each occurrence of 0 with 01, and each occurrence of 1 with 10.

#For example, for n = 3, the 1st row is 0, the 2nd row is 01, and the 3rd row is 0110.
#Given two integer n and k, return the kth (1-indexed) symbol in the nth row of a table of n rows.*/


#Input: n = 1, k = 1
#Output: 0
#Explanation: row 1: 0

#think of the problem like this
#        0
#     /       \
#    0          1
#   /   \      /    \
#   0     1    1      0
# / \     / \   / \   / \
# 0  1   1   0  1  0  0  1

class Solution(object):
    def kthGrammar(self, N, K):
        if N==1:
            if K==1:
                return 0
            else:
                return 1
            
        mid=2**(N-1)
        if K<=mid:
            return self.kthGrammar(N-1,K)
        else:
            res=self.kthGrammar(N-1,K-mid)
            if res==0:
                return 1
            else:
                return 0