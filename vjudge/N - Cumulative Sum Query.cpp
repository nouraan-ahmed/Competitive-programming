#include <string>
#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int n;
    int sum=0;
    int count;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>count;
    int arri[count];
    int arrj[count];
    for(int j=0;j<count;j++){
        cin>>arri[j];
        cin>>arrj[j];
    }
    for(int k=0;k<count;k++){
        sum=0;
        for(int o=arri[k];o<=arrj[k];o++){
            sum+=arr[o];
        }
        cout<<sum<<endl;
    }
}
