#include <iostream>

using namespace std;

int check_min(int a,int b){
    int min;
    if(a>b){
        min=b;
    }
    else{
        min=a;
    }
    return min;
}

int main()
{
    int t;
    int min;
    int aa,bb,nn;
    int count=0;
    cin>>t;
    int a[t],b[t],n[t];
    for(int i=0;i<t;i++){
        cin>>a[i]>>b[i]>>n[i];
    }
    for(int j=0;j<t;j++){
        count=0;
        aa=a[j];
        bb=b[j];
        nn=n[j];
        for(int i=0;aa<=nn&&bb<=nn;i++){
            min=check_min(aa,bb);
            if(min==aa){
                aa+=bb;
            }
            else if(min==bb){
                bb+=aa;
            }
            count++;
        }
        cout<<count<<endl;
    }

}

