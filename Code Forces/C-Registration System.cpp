#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    int count=0;
    int flag=0;
    cin>>n;
    string arr[n];
    string res[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int u=0;u<n;u++){
        res[u]="OK";
    }

    for(int j=0;j<n;j++){
        count=0;
        flag=0;
        if(res[j]=="OK"){
        for(int i=j+1;i<n;i++){
            if(arr[j]==arr[i]&&i!=j&&i>j){
                count++;
                if((flag==0||count>1)&&res[i]=="OK"){
                    flag=1;
                    res[i]=arr[j]+to_string(count);

                }

            }
        }
        }
    }
    for(int k=0;k<n;k++){
        cout<<res[k]<<endl;
    }
}
