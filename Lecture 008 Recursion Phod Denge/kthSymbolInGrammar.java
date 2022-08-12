//Leetcode 779. K-th Symbol in Grammar

//Problem Statement: 
/* We build a table of n rows (1-indexed). We start by writing 0 in the 1st row. Now in every subsequent row, we look at the previous row and replace each occurrence of 0 with 01, and each occurrence of 1 with 10.

For example, for n = 3, the 1st row is 0, the 2nd row is 01, and the 3rd row is 0110.
Given two integer n and k, return the kth (1-indexed) symbol in the nth row of a table of n rows.*/


/* Input: n = 1, k = 1
Output: 0
Explanation: row 1: 0
*/

// think of the problem like this
/*        0
      /       \
     0          1
   /   \      /    \
   0     1    1      0
 / \     / \   / \   / \
 0  1   1   0  1  0  0  1
*/

public int kthGrammar(int N, int K) {
	
	// base case
	if(N==1) {
		return 0;
	}
	if(K%2==1) {
		return kthGrammar(N-1, (K+1)/2);
	} else {
		return flip(kthGrammar(N-1, K/2));
	}
}

public int flip(int val) {
	return val==0? 1 : 0;
}