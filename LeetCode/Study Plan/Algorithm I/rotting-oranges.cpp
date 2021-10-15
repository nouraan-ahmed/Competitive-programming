class Solution {
public:
    bool isValid(int i,int j,vector<vector<int>>&grid){
        if(i>-1 and i<grid.size() and j>-1 and j<grid[0].size()) return true;
        return false;
    }
    int bfs(queue<pair<pair<int,int>,int>>q,vector<vector<int>>&grid){
        int m=0;
        while(!q.empty()){
            int i=q.front().first.first;
            int j=q.front().first.second;
            m=q.front().second;
            q.pop();
            if(isValid(i+1,j,grid) and grid[i+1][j]==1){
                grid[i+1][j]=2;
                q.push({{i+1,j},m+1});
            }
            if(isValid(i-1,j,grid) and grid[i-1][j]==1){
                grid[i-1][j]=2;
                q.push({{i-1,j},m+1});
            }
            if(isValid(i,j+1,grid) and grid[i][j+1]==1){
                grid[i][j+1]=2;
                q.push({{i,j+1},m+1});
            }
            if(isValid(i,j-1,grid) and grid[i][j-1]==1){
                grid[i][j-1]=2;
                q.push({{i,j-1},m+1});
            }
        }
        return m;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2) {
                    q.push({{i,j},0});
                }
            }
        }
        int m= bfs(q,grid);
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1) {
                    return -1;
                }
            }
        }
        return m;
    }
};
