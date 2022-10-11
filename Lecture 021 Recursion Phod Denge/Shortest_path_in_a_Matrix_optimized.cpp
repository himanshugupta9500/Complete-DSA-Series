class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n= grid.size();
        if(grid[0][0]==1 || grid[n-1][n-1]==1) return -1;
        
        queue<pair<int,int>> q;
        q.push({0,0});
        
        vector<vector<bool>> visited(n,vector<bool>(n,false));
        visited[0][0]=true;
        
        int ans=0;
        while(!q.empty()){
            int x= q.size();
            ans++;
            for(int i=0;i<x;i++){
                pair<int,int> p= q.front();
                q.pop();
                
                if(p.first==n-1 and p.second==n-1) return ans;
                
                int dx[]={0,1,1,1,0,-1,-1,-1};
                int dy[]={-1,-1,0,1,1,1,0,-1};
                
                for(int j=0;j<8;j++){
                        int row= p.first+dx[j];
                    int col= p.second + dy[j];
                    if(isSafe(row,col,n,visited,grid)){
                        q.push({row,col});
                        visited[row][col]=true;
                    }
                }
            }
        }
        return -1;
    }
    bool isSafe(int i,int j,int n,vector<vector<bool>> &visited,vector<vector<int>> &grid){
        return i>=0 and i<n and j>=0 and j<n and grid[i][j]==0 and !visited[i][j];
    }
};

//Time Complexity: O(N^2)
//Space Complexity: O(N^2)