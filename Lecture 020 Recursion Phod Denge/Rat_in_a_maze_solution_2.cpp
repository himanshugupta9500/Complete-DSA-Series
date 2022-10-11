#include <bits/stdc++.h> 
bool isSafe(int row,int col,int n,vector<vector<int>> &arr,vector<vector<int>> &visited){
   return row>=0 and row<n and col>=0 and col<n and arr[row][col]!=0 and visited[row][col]==0;
}
void solve(int i,int j, int n,vector < vector < int >> & arr,string temp,vector<string> &ans,vector<vector<int>> &visited){
    //Base Case
    if(i==n-1 and j==n-1){
        ans.push_back(temp);
        return ;
    }
   int row_span[]= {+1,0,0,-1};
       int col_span[]={0,-1,+1,0};
    string str= "DLRU";
    for(int k=0;k<4;k++){
        int row= i+row_span[k];
        int col= j+col_span[k];
        if(isSafe(row,col,n,arr,visited)){
            visited[i][j]=1;
            solve(row,col,n,arr,temp+str[k],ans,visited);
            visited[i][j]=0;
        }
    }
    

}
vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    if(arr[0][0]==0 || arr[n-1][n-1]==0) return {};
    vector<string> ans;
    string temp;
    vector<vector<int>> visited(n,vector<int>(n,0));
    solve(0,0,n,arr,temp,ans,visited);

    return ans;
}

// Time Complexity: O(3^n2)
// Space Complexity: O(N^2){stack space} + O(N^2){visited array}