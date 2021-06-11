#include <iostream>
#include <stack>
#include <string>
#include <string.h>

using namespace std;

int is_balanced(stack<char> stk, string s){
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
            }
            else return 0;
        }
    }
    if(stk.empty()) return 1;
    else return 0;
}

int main()
{
    int n; //no. of strings to check if it's balanced or not
    cin>>n;
    //enter strings
    string arr[n];
    for(int k=0;k<n;k++){
        cin>> arr[k];
    }
    
    string str="";
    stack<char> stk;
    int x;
    int c =sizeof(arr)/sizeof(string);
    
    for(int i=0;i<c;i++){
        str= arr[i];
        x=is_balanced(stk,str)?1:0;
        if(x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


}
