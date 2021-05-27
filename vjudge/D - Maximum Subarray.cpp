#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int count=1;
    int max=1;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n-1;j++){
        if(arr[j]<arr[j+1]){
            count++;
            if(max<count) max=count;
        }
        else{
            count=1;


        }
    }
    cout<<max;

}

