#include <iostream>

using namespace std;

int max(int x1,int x2,int x3){

    int max=x1;
    if(max<x2){
        max=x2;
    }
    if(max<x3){
        max=x3;
    }
    return max;
}

int min(int x1,int x2,int x3){

    int min=x1;
    if(min>x2){
        min=x2;
    }
    if(min>x3){
        min=x3;
    }
    return min;
}

int main()
{
    int x1,x2,x3;
    cin>>x1>>x2>>x3;

    int minv=min(x1,x2,x3);
    int maxv=max(x1,x2,x3);
    int mid=0;

    if(x1!=minv &&x1!=maxv){
        mid=x1;
    }
    if(x2!=minv &&x2!=maxv){
        mid=x2;
    }
    if(x3!=minv &&x3!=maxv){
        mid=x3;
    }
    cout<< (maxv-mid)+(mid-minv) <<endl;

    return 0;
}
