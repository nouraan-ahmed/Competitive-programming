#include <iostream>

using namespace std;

int k,n,w;
int sum=0;
int main()
{
    cin>> k>>n>>w;
    for(int i=1;i<=w;i++){
        sum+=k*i;
    }
    if(sum<=n){
        cout<<0;
    }
    else{
        cout<< sum-n <<endl;
    }
}
