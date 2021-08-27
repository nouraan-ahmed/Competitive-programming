#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int mySize = 10e6;
long long answer1[mySize];
long long answer2[mySize];
long long arr[mySize];

int main()
{
    long long m=0,n=0,x=0;
    cin>>n;

    for(long long i=1;i<=n;i++){
        cin>>x;
        arr[i]=x;
        answer1[i]+=arr[i]+answer1[i-1];
    }
    sort(arr+1,arr+n+1);
    for(long long i=1;i<=n;i++){
        answer2[i]+=arr[i]+answer2[i-1];
    }
    cin>>m;
    while(m--){
    long long type,l,r;
    cin>>type>>l>>r;
    if(type==1){
        cout<<answer1[r]-answer1[l-1]<<endl;
    }
    else{
        cout<<answer2[r]-answer2[l-1]<<endl;
    }
    }
}

