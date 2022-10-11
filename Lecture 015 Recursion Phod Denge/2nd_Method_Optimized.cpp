class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        print(0,nums,ans);
        return ans;
    }
    void print(int id,vector<int> &nums,vector<vector<int>> &ans){
        //Base Case
        if(id==nums.size()){
            //valid ans
            ans.push_back(nums);
            return ;
        }
        for(int i=id;i<nums.size();i++){
            swap(nums[i],nums[id]);
            print(id+1,nums,ans);
            swap(nums[i],nums[id]);
        }
    }
};

// Time Complexity: O(N*N!)
// Space Complexity: O(N){stack space}