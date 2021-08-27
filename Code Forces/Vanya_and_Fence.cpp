#include <iostream>

using namespace std;

int main()
{
    int h,n;
    int x;
    int count=0;
    cin>>n;
    cin>>h;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x<=h){
        count++;
        }
        else{
        count+=2;
        }
    }
    cout<<count;
}

