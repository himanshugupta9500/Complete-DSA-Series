class Solution {
public:
    void solve(int n, vector<vector<string>> &ans,vector<string> &board,int row,vector<int> &col_upper,vector<int> &primary_diag,vector<int> &sec_diag){
        //base case
        if(row==n){
            ans.push_back(board);
            return ;
        }
        //chance and no chance strategy
        for(int i=0;i<n;i++){
            if(col_upper[i]==0 and primary_diag[row + i]==0 and sec_diag[n-1 + i- row]==0){
                board[row][i]='Q';    //visited 
                col_upper[i]= primary_diag[row+i] = sec_diag[n-1 + i-row]=1;
                solve(n,ans,board,row+1,col_upper,primary_diag,sec_diag);
                board[row][i]='.';    //backtracking step ki jaha se aye jo usee unvisted kar do
                col_upper[i]= primary_diag[row+i] = sec_diag[n-1 + i-row]= 0;
            }
        }
       
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
        board[i]=s;
        }
        vector<int> col_upper(n,0),primary_diag(2*n-1,0) , sec_diag(2*n-1,0);
        solve(n,ans,board,0,col_upper,primary_diag,sec_diag);
        return ans;
    }
};

//Time Complexity: O(N!)
//Space Complexity: O(N^2)