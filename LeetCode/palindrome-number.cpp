class Solution {
public:
    bool isPalindrome(int x) {
        bool flag=false;
        string str = to_string(x);
        for(int i=0;i<str.length();i++){
            if(str[i]==str[str.length()-1-i]){
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
    return flag;
    }
};
