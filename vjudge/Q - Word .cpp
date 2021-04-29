#include <string>
#include <iostream>
#include <string.h>
using namespace std;
int main() {
    string s="";
    cin>>s;
    int n;
    n=s.size();
    int upp=0,low=0;
    char ch[100];
    strcpy(ch,s.c_str());
    for(int i=0;i<n;i++){
        if(ch[i]>='A'&&ch[i]<='Z'){
            upp++;
        }
        else if(ch[i]>='a'&&ch[i]<='z'){
            low++;
        }
    }
    for(int i=0;i<n;i++){
        if(upp>low){
            ch[i]=toupper(ch[i]);
        }
        else{
            ch[i]=tolower(ch[i]);
        }
    }
    string str="";
    for(int i=0;i<n;i++){
        str=str+ch[i];
    }
    cout<<str<<endl;
}

