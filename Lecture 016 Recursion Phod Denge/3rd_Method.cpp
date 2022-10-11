class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
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
        unordered_set<int> s;
        for(int i=id;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()) continue;  //uske jessa phle aa chuka then skip 
            s.insert(nums[i]);
            swap(nums[i],nums[id]);
            print(id+1,nums,ans);
            swap(nums[i],nums[id]);
        }
    }
};