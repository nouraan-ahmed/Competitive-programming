class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>> q;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    mat[i][j]=2;
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            if(i+1<mat.size()&&mat[i+1][j]==1){
                mat[i+1][j]=mat[i][j]+1;
                q.push({i+1,j});
            }
            if(i-1>=0&&mat[i-1][j]==1){
                mat[i-1][j]=mat[i][j]+1;
                q.push({i-1,j});
            }
            if(j+1<mat[0].size()&&mat[i][j+1]==1){
                mat[i][j+1]=mat[i][j]+1;
                q.push({i,j+1});
            }
            if(j-1>=0&&mat[i][j-1]==1){
                mat[i][j-1]=mat[i][j]+1;
                q.push({i,j-1});
            }
        }
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                mat[i][j]-=2;
            }
        }
        return mat;
    }
};
