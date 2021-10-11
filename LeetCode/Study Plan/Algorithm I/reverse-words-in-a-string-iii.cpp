class Solution {
public:
    string reverseWords(string s) {
        string str="";
        string res="";
        for(int i=0;i<=s.length();i++){
            
            if(s[i]==' '||i==s.length()){
                if(res!=""){
                    res+=" ";
                }
                for(int j=0;j<str.length()/2;j++){
                    char tmp = str[j];
                    str[j] = str[str.length()-j-1];
                    str[str.length()-j-1] = tmp;
                }
                res+=str;
                str="";
            }
            else{
                str+=s[i];
            }
        }
        return res;
    }
};
