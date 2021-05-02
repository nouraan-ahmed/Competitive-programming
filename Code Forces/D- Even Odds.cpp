#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y;
    long long mid,num;
    cin>>x>>y;
    if(x%2==0){
        mid=x/2;
        if(y<=mid){
            num=(y*2)-1;
        }
        else{
            y=y-mid;
            num=y*2;
        }
    }
    else{
        mid=(x/2)+1;
        if(y<=mid){
            num=(y*2)-1;
        }
        else{
            y=y-mid;
            num=y*2;
        }
    }
    cout<<num<<endl;
}
