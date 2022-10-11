from typing import *

  
def combinations(n :int,k :int) -> List[List[int]]:
    
    def solve(i, n, k):
        
        # base case 
        if k == 0:
            ans.append(temp.copy())
            return
        
        if i > n:
            return

        # optimization
        if k > n-i+1:
            return 
        
       
        

        # Pick i-th Element
        temp.append(i)
        
        # Ask Recursion to do the Rest of the Task
        solve(i + 1, n, k - 1)
        
        #not pick
        temp.pop()
        #ask recursion to do rest of the task
        solve(i + 1, n, k)
    
 
    ans = []
    temp = []
    
    solve(1, n, k)
    return ans
    
"""
Time Complexity  : O(2^N)
Space Complexity : O(N)

"""