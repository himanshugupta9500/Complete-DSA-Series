class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        int n= digits.size();
        if(n==0) return ans;
        string temp;
         unordered_map<char,string> ump;
        ump['2']= "abc";
        ump['3']= "def";
        ump['4']= "ghi";
        ump['5']= "jkl";
        ump['6']= "mno";
        ump['7']= "pqrs";
        ump['8']="tuv";
        ump['9']= "wxyz";
        solve(0,n,digits,temp,ans,ump);
        return ans;
    }
    void solve(int i,int n,string digits,string &temp,vector<string> &ans,unordered_map<char,string> &ump){
        //Base CAse
        if(i==n) {
            ans.push_back(temp);
            return ;
        }
        
        
        for(auto ch : ump[digits[i]]){
            temp.push_back(ch);
            solve(i+1,n,digits,temp,ans,ump);
            temp.pop_back();
        }
    }
};
//Time Complexity: O(4^n)
//Space Complexity: O(n)