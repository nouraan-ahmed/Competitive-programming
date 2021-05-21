#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    int count=0;
    int max=0,min=100000;
    float result=0;
    cin>>m;
    cin>>n;
    int xx;
    int x;
    int ind=0;
    int sum[m];
    int res[m];
    queue<int> mypq;
    for(int i=0;i<n;i++){
        cin>>xx;
        mypq.push(xx);
    }


    for(int i=0;i<m;i++){
        sum[i]=0;
        res[i]=0;
    }

    while(!mypq.empty()){
        if(count<m){
            ind=count;
        }
        if(count>=m){
            min=100000;
            for(int k=0;k<m;k++){

                if(min>sum[k]){
                    min=sum[k];
                    ind= k;
                }
            }
        }

        x=mypq.front();
        mypq.pop();
        count++;
        sum[ind]+=x;

        if(max<sum[ind])
        {
            max=sum[ind];

        }


        if(count>=m){
            res[ind]+=sum[ind]-x;
        }

    }

    for(int r=0;r<m;r++){
        result+=res[r];
    }
    result/=n;
    cout<<max<<" "<<result<<endl;

}

