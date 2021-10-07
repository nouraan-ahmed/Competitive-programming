#include <iostream>
#include <stack>
#include <string>
#include <string.h>

using namespace std;



class Solution {
public:
    bool isValid(string s) {
         stack<char> stk;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='<'||s[i]=='['){
            stk.push(s[i]);
        }
        else if(s[i]==')'||s[i]=='}'||s[i]=='>'||s[i]==']'){
            if(!stk.empty()){
                if(s[i]==')'&&stk.top()=='('){
                    stk.pop();
                }
                //ascii code for the brackets opening and closing are different by 2 
                else if(s[i]==stk.top()+2){
                    stk.pop();
                }
                else return 0;
            }
            else return 0;
        }
    }
    if(stk.empty()) return 1;
    else return 0;
    }
};
