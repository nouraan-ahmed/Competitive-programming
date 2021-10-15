class Solution {
public:
    void util(string s,vector<string>& ans,string str,int index){
        if(index==s.length()){
            ans.push_back(str);
            return;
        }
        if(isdigit(s[index])){
            util(s,ans,str+s[index],index+1);
        }
        else{
            util(s,ans,str+(char)tolower(s[index]),index+1);
            util(s,ans,str+(char)toupper(s[index]),index+1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        util(s,ans,"",0);
        return ans;
    }
};
