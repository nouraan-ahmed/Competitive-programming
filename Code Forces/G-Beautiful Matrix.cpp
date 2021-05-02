#include <iostream>

using namespace std;

int main()
{
    int ele;
    int row,col;
    int count=0;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>ele;
            if(ele==1){
                row=i;
                col=j;
                break;

            }
        }
    }
    if(row>=3){
        count+=row-3;
    }
    if(col>=3){
        count+=col-3;
    }
    if(row<3){
        count+=3-row;
    }
    if(col<3){
        count+=3-col;
    }

    cout<< count <<endl;

    return 0;
}
