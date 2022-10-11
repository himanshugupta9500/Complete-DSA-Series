class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n= candidates.size();
        vector<vector<int>> ans;
        vector<int> temp;
        print(0,n,candidates,target,ans,temp);
        return ans;
    }
    
    void print(int i,int n,vector<int>& candidates, int target,vector<vector<int>> &ans,vector<int> &temp){
        
        //Base Case 
        //1st base case
        if(target==0){
            ans.push_back(temp);
            return ;
        }
        //2nd base case
        if(target<0 ) return ;
        
        //3rd base case
        if(i>=n) return ;
        
        
        
        //pick 
        temp.push_back(candidates[i]);
        print(i,n,candidates,target - candidates[i],ans,temp);
        
        //not pick 
        temp.pop_back();
        print(i+1,n,candidates,target,ans,temp);
    }
};

//Time Complexity: exponential(2^k)
//Space Complexity: O(target)