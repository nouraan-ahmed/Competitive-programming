#include <iostream>

using namespace std;

int main()
{
    int n;
    bool flag=false;
    cin>>n;
    string str[n];
    int bef[n];
    int aft[n];
    for(int i=0;i<n;i++){
        bef[i]=0;
        aft[i]=0;
    }
    for(int i=0;i<n;i++){
        cin>>str[i]>>bef[i]>>aft[i];
    }
    for(int i=0;i<n;i++){

        if(bef[i]<aft[i]&&bef[i]>=2400){
            flag=true;
            break;
        }

    }
    if(flag){
        cout<<"YES"<<endl;
        break;
    }
    if(!flag){
        cout<<"NO"<<endl;
    }
}

