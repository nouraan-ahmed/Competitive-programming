#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long arr[n];

    for(long long j=0;j<n;j++){
        cin>>arr[j];
    }

    sort(arr,arr+n);

    long long count=1;
    long long max=1;
    long long out=1;
    for(long long i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{
            if(count>max){
                max=count;
                out=arr[i];
            }
            else if(count==max){
                if(out<arr[i]){
                    out=arr[i];
                }
            }
            count=1;
        }
    }
    cout<<out<<endl;

}
