import java.util.*;
public class Solution 
{
    static void solve(int i, int n, int k, ArrayList<Integer> =temp, ArrayList<ArrayList<Integer>> ans)
    {
        // Base Cases

        if (k == 0)
        {
            ans.add(new ArrayList(temp));
            return;
        }
        if (i > n)
            return;

        // optimizations

        if (k > n - i + 1)
            return;


        // Pick i-th Element

        temp.add(i);

        // Ask Recursion to do the Rest of the Task

        solve(i + 1, n, k - 1, temp, ans);

        //not pick
        
        temp.remove(temp.size()-1);

        // Ask Recursion to do the Rest of the Task

        solve(i + 1, n, k, temp, ans);
    }
    public static ArrayList<ArrayList<Integer>> combinations(int n, int k) 
    {
        ArrayList<ArrayList<Integer>> ans = new ArrayList<>() ;
        ArrayList<Integer> temp = new ArrayList<>() ;

        solve(1 , n , k , temp , ans) ;

        return ans ;
    }

}

/*
Time Complexity  : O(2^N)
Space Complexity : O(N)
*/