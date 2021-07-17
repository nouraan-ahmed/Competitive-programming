#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int k;
    int n;
    int cnt=0;
    string str;
    cin>>n;
    cin>>k;
    char arr[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for(int i=0;i<k;i++){
        str+=arr[i];
    }
    for(int i=0;str.length()!=n;i++){
        str+=str[i];
    }
    cout<<str;
}

