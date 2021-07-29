class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> umap;
        int cnt=0;
        for(int j=0;j<jewels.length();j++){
            umap[jewels[j]]=1;
        }
        for(int i=0;i<stones.length();i++){
            if(umap[stones[i]]==1)cnt++;
        }
        return cnt;
    }
};
