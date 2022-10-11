class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp; 
        //freq + unique_elements
        unordered_map<int, int> ump;
        
        for (auto x : nums) ump[x]++;
        
        print(ump,temp,ans,nums.size());
        return ans;
    }

    void print(unordered_map<int, int>& ump, vector<int>& temp, vector<vector<int>>& ans, int n) {
       //Base Case
        if (temp.size() == n) {
            //Valid ans
            ans.push_back(temp);
            return;
        }
        for (auto [key, count] : ump) {     //ump[key] = value;
            if (count == 0) continue;  //vo element exhaust ho chuka h 
            temp.push_back(key); 
            ump[key]--;
            print(ump,temp,ans,n);
            temp.pop_back(); 
            ump[key]++;    //Backtrack
        }
    }
};