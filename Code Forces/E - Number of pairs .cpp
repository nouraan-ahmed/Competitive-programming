

#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return true;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);


        return binarySearch(arr, mid + 1, r, x);
    }

    return false;
}


int main()
{
    int s,n;
    int count=0;
    bool res;
    cin>>s;
    cin>>n;
    int arr[s];
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    int l=0;
    int r=s-1;
    sort(arr,arr+s);
    for(int j=0;j<s;j++){
        res=binarySearch(arr,l,r,n-arr[j]);
        if(res){
            for(int k=j;k<s;k++){
                if(arr[k]==n-arr[j]&&k!=j){
                    count++;
                }
            }
        }
    }
    cout<<count;

}
