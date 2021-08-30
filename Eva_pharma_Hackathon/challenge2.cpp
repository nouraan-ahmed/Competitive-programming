#include <iostream>
#include <stack>

using namespace std;

int calc(string s){
    stack<int> my_stack;
    int sum=0;
    int sign=1;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
            int num=0;
            while(i<s.size()&& isdigit(s[i])){
                num=num*10+(s[i]-'0');
                i++;
            }
            i--;
            num*=sign;
            sum+=num;
            sign=1;
        }
        else{
            if(s[i]=='('){
                my_stack.push(sum);
                my_stack.push(sign);
                sum=0;
                sign=1;
            }
            else if(s[i]==')'){
                sum*=my_stack.top();
                my_stack.pop();
                sum+=my_stack.top();
                my_stack.pop();
            }
            else if(s[i]=='-'){
                sign=-1;
            }
        }
    }
    return sum;
}

int main()
{
    string s;
    cin>>s;
    cout<< calc(s);
}
