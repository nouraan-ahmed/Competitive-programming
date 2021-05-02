#include <iostream>

using namespace std;

int binarysearch(int arr[],int l,int r,int x){
    int mid;
    int flag=0;
    if(l>r){
        cout<<"NO"<<endl;
        return false;
    }
    else{
        mid=(l+r)/2;
        if(x==arr[mid]){
            cout<<"YES"<<endl;
            return mid;
        }
        else if(x<arr[mid]){
            flag=0;
            for(int i=l;i<=mid-1;i++){
                cout<<arr[i]<<" ";
                flag=1;
            }
            if(flag==1){
                cout<<endl;
            }
            return binarysearch(arr,l,mid-1,x);
        }
        else if(x>arr[mid]){
            flag=0;
            for(int i=mid+1;i<=r;i++){
                cout<<arr[i]<<" ";
                flag=1;
            }
            if(flag==1){
                cout<<endl;
            }
            return binarysearch(arr,mid+1,r,x);
        }
        return true;
    }

}

int main()
{
    int x,n;
    cin>>x;
    cin>>n;
    int l=0,r=n-1,mid;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    binarysearch(array,l,r,x);

}

