#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n,k;
    bool flag=true;
    string res="No";
    int message[2];
    cin>>n;
    cin>>k;
    int arr[n];

    for(int j=0;j<n;j++){
        cin>>arr[j];
    }

    for(int i=0;i<n;i++){

        for(int l=0;l<n;l++){
            if(arr[i]+arr[l]==k && flag==true){
                res="Yes";
                if(arr[i]<arr[l]){
                    message[0]=arr[i];
                    message[1]=arr[l];
                    flag=false;
                    break;
                }
                else{
                    message[0]=arr[l];
                    message[1]=arr[i];
                    flag=false;
                    break;
                }
            }
        }

    }

    cout<<res<<endl;
    if(res=="Yes"&&n>1)
        cout<<message[0]<<" "<<message[1]<<endl;
    else if(res=="Yes"&&n==1){
        cout<<message[0]<<" "<<message[1]<<endl;
    }

}
