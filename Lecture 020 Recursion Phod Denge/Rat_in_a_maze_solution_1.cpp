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
    //Decision making 
    //L,U,R,D --> call hi alphabetical order me apply karu 
    //Left
     visited[i][j]=1;
    //Down
     if(isSafe(i+1,j,n,arr,visited)){
      
//         temp+="D";
        solve(i+1,j,n,arr,temp + "D",ans,visited); 
        //state preservation or backtracking
//         temp.pop_back();
    
    }
    if(isSafe(i,j-1,n,arr,visited)){
       
//         temp+="L";
        solve(i,j-1,n,arr,temp + "L",ans,visited); 
        //state preservation or backtracking
//         temp.pop_back();
      
    }
 
    //Right
     if(isSafe(i,j+1,n,arr,visited)){
       
//         temp+="R";
        solve(i,j+1,n,arr,temp + "R",ans,visited); 
        //state preservation or backtracking
//         temp.pop_back();
      
    }
       //UP
     if(isSafe(i-1,j,n,arr,visited)){
      
//         temp+="U";
        solve(i-1,j,n,arr,temp + "U",ans,visited); 
        //state preservation or backtracking
//         temp.pop_back();
        
    }
    
     visited[i][j]=0;
}
vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    if(arr[0][0]==0 || arr[n-1][n-1]==0) return {};
    vector<string> ans;
    string temp;
    vector<vector<int>> visited(n,vector<int>(n,0));
    solve(0,0,n,arr,temp,ans,visited);
//     sort(ans.begin(),ans.end());
    return ans;
}

// Time Complexity: O(3^n2)
// Space Complexity: O(N^2){stack space} + O(N^2){visited array}
