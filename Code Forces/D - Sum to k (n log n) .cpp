#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int search(int arr[],int l,int r,int x){


    if(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            return search(arr,l,mid-1,x);
        }
        else if(arr[mid]<x){
            return search(arr,mid+1,r,x);
        }
    }
    return -1;
}

int main()
{
    long long n,k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);


    for(long long j=0;j<=n;j++){
        if(arr[j]+arr[j]==k){
            cout<<"Yes"<<endl;
            cout<<arr[j]<<" "<<arr[j]<<endl;
            break;
        }
        else if(search(arr,0,n,k-arr[j])!=-1){
            cout<<"Yes"<<endl;;
            cout<<arr[j]<<" "<<k-arr[j]<<endl;
            break;
        }
        if(j==n){
            cout<<"No";
        }
    }

}

[close]

