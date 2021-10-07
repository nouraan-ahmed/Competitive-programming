class Solution {
public:
     string longestCommonPrefix(vector<string>& strs) {
        string s="";
        bool flag=false;
         if(strs.size()==1){
             return strs[0];
         }
        for(int i=0;i<strs[0].length();i++){
            for(int r=1;r<strs.size();r++){
                if(strs[0][i]==strs[r][i]){
                    flag=true;
                }
                else{
                    flag=false;
                    return s;
                }
            }
            if(flag){
            s+=strs[0][i];
            }
         }
        return s;
    }
};
