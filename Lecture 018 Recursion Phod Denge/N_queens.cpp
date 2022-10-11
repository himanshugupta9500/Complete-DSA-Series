class Solution {
public:
    bool isSafe(vector<string> &board ,int row ,int col,int n){
       
        int rowdia=row,coldia=col;
        
        //primary diagonal 
        while(row>=0 && col>=0){
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }
        
        row=rowdia;
        col=coldia;
        //checking corresponding upper coloumns
        while(row>=0){
            if(board[row][col]=='Q') return false;
            row--;
        }
        row= rowdia;
        //secondary diagonal
        while(col<n && row>=0){
            if(board[row][col]=='Q') return false;
            col++;
            row--;
        }
        return true;
    }
    void solve(int n, vector<vector<string>> &ans,vector<string> &board,int row){
        //base case
        if(row==n){
            ans.push_back(board);
            return ;
        }
        //chance and no chance strategy
        for(int i=0;i<n;i++){
            if(isSafe(board,row,i,n)){
                board[row][i]='Q';    //visited 
                solve(n,ans,board,row+1);
                board[row][i]='.';    //backtracking step ki jaha se aye jo usee unvisted kar do
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
        solve(n,ans,board,0);
        return ans;
    }
};

//Time Complexity: O(N*N!)
//Space Complexity: O(N^2)