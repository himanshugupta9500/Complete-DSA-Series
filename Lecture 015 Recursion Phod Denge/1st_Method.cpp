class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> freq(nums.size(),false);
        print(nums,temp,ans,freq);
        return ans;
        
    }
    void print(vector<int> &nums,vector<int> &temp,vector<vector<int>> &ans,vector<bool> &freq){
        //Base Case
        if(temp.size()==nums.size()){
            //valid ans
            ans.push_back(temp);
            return ; //backtrack
        }
        
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                freq[i]=true;
                temp.push_back(nums[i]);
                print(nums,temp,ans,freq);
                temp.pop_back();
                freq[i]=false;  //Backtrack
            }
        }
    }
};

// Time Complexity: O(N*N!)
// Space Complexity: O(N){stack space} + O(N){frequency array} 