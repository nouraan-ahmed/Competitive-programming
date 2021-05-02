#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    string s;
    string res;

    cin>>n;

    string arr[n];
    for(int i=0;i<n;i++){
        res="";
        cin>>s;
        if(s.size()>10){

            res+=s[0];
            res+=to_string(s.size()-2);
            res+=s[s.size()-1];

        }
        else res=s;

        arr[i]=res;
    }
    for(int f=0;f<n;f++){
        cout<<arr[f]<<endl;
    }
}


