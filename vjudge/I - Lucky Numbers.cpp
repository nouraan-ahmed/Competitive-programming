#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int count=0;
    int n,k;
    bool flag=true;
    vector<int> nums;
    cin>>n>>k;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        count=0;
        flag=true;
        string str=to_string(arr[i]);
        for(long long j=0;j<str.length();j++){

            if(str[j]=='4'||str[j]=='7'){
                count++;
                if(count>k){
                    flag=false;
                    break;
                }
            }
        }
        if(flag){
            nums.push_back(arr[i]);
        }

    }
    cout<<nums.size();

}

