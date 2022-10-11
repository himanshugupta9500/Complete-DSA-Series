//This method will give TLE.We have introduced this method so that you can understand better.

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& arr) {
        int n= arr.size();
          if(arr[0][0]==1 || arr[n-1][n-1]==1) return -1;
    // vector<string> ans;
    // string temp;
//     vector<vector<int>> visited(n,vector<int>(n,0));
        int  ans=INT_MAX;
        int temp=1;
    solve(0,0,n,arr,temp,ans);
//     sort(ans.begin(),ans.end());
    // if(ans==INT_MAX) return -1;
    //     else return ans;
        
        return ans==INT_MAX?-1:ans;
    }
    bool isSafe(int row,int col,int n,vector<vector<int>> &arr){
   return row>=0 and row<n and col>=0 and col<n and arr[row][col]==0;
}
    
    void solve(int i,int j, int n,vector < vector < int >> & arr,int temp,int &ans){
    //Base Case
    if(i==n-1 and j==n-1){
        ans= min(ans,temp);
        return ;
    }
     arr[i][j]=2; //visited 
    //8 directions
   int row_span[]= {+1,0,0,-1,-1,-1,+1,+1};
       int col_span[]={0,-1,+1,0,-1,+1,-1,+1};
    for(int k=0;k<8;k++){
        int row= i+row_span[k];
        int col= j+col_span[k];
        if(isSafe(row,col,n,arr)){
           
            solve(row,col,n,arr,temp+1,ans);
         
        }
    }
       
    
    arr[i][j]=0;
}
    
};

//Time Complexity: O(7^N2)



