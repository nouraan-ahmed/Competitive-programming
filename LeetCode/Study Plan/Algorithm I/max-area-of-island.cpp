class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i, int j,int rows,int cols,vector<vector<int>>& visited,int& count){
        if(i<0||j<0||i>=rows||j>=cols) return;
        if(visited[i][j]==1||grid[i][j]==0) return;
        if(grid[i][j]==1){
            count++;
            visited[i][j]=1;
        }
        dfs(grid,i+1,j,rows,cols,visited,count);
        dfs(grid,i-1,j,rows,cols,visited,count);
        dfs(grid,i,j+1,rows,cols,visited,count);
        dfs(grid,i,j-1,rows,cols,visited,count);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int count=0;
        int maxx=0;
        int rows=grid.size();
        int cols=grid[0].size();
        vector<vector<int>> visited(rows,vector<int>(cols));
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                count=0;
                if(grid[i][j]==1&&visited[i][j]==0){
                    dfs(grid,i,j,rows,cols,visited,count);
                    maxx=max(count,maxx);
                }
            }
        }

        return maxx;
    }
};
