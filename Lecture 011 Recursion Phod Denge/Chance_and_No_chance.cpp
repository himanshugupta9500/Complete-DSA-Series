class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         int n= candidates.size();
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(),candidates.end()); //to group similar elements
        print(0,n,candidates,target,ans,temp);
        return ans;
    }
       void print(int idx,int n,vector<int>& candidates, int target,vector<vector<int>> &ans,vector<int> &temp){
        //Base Case
           
         if(target==0){
             ans.push_back(temp);
             return ;
         }
          
        
         for(int i=idx;i<n;i++){  //sbko chance
             if(i>idx and candidates[i]==candidates[i-1]) continue ; //skip or no chance
             
             if(candidates[i]<=target){
             temp.push_back(candidates[i]); //chance
             print(i+1,n,candidates,target-candidates[i],ans,temp);
             temp.pop_back();
             }
         }
    }
};

// T.C: O(2^n)
// S.C: O(n)