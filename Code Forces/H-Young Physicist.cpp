#include <iostream>

using namespace std;



int main()
{
    int sumx=0,sumy=0,sumz=0;
    int n;
    int arr[100][100];
    string res="NO";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        sumx+=arr[i][0];
        sumy+=arr[i][1];
        sumz+=arr[i][2];
    }
    if(sumx==0&&sumy==0&&sumz==0){
        res="YES";
    }

    cout<< res<<endl;

    return 0;
}
