class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>> ans;
        vector<int> temp;
        print(1,k,n,ans,temp);
        return ans;
    }
    void print (int ele,int k,int target,vector<vector<int>> &ans,vector<int> &temp){
        //Base case
       if(k==0){
           if(target==0){
               ans.push_back(temp);
               
           }
           return ;
       }
        
        
        
        
        for(int i=ele;i<=9;i++){
            
          temp.push_back(i);
         print(i+1,k-1,target-i,ans,temp);
            temp.pop_back();
        }
    }
};