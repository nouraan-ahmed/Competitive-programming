#include <bits/stdc++.h>

using namespace std;

bool havesum(int arr[],int s,int n){
    int l=0;
    int r=s-1;
    while(l<r){
        if(arr[l]+arr[r]==n) return true;
        else if(arr[l]+arr[r]<n) l++;
        else r--;
    }
    return false;
}

int main()
{
    int s,n;
    cin>>s;
    cin>>n;
    int arr[s];
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    sort(arr,arr+s);
    if(havesum(arr,s,n)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
