class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(),nums.end()); //to group similar elements
        print(0,nums,ans);
        return ans;
    }
    void print(int id,vector<int> nums,vector<vector<int>> &ans){
        //Base Case
        if(id==nums.size()){
            ans.push_back(nums);
            return ;
        }

        for(int i=id;i<nums.size();i++){
            if(i!=id and nums[i]==nums[id]) continue;  //skip similar elements
            swap(nums[i],nums[id]);  //swap
            print(id+1,nums,ans);   
           
        }
    }
};