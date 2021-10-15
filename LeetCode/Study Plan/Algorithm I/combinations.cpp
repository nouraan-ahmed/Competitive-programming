class Solution {
public:
    void solve(int ind,int k,vector<vector<int>>&res,vector<int>&temp,int n){
        if(temp.size()==k){
            res.push_back(temp);
            return;
        }
        for(int i=ind;i<=n;i++){
            temp.push_back(i);
            solve(i+1,k,res,temp,n);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>res;
        vector<int>temp;
        solve(1,k,res,temp,n);
        return res;
    }
};
