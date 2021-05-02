#include <iostream>

using namespace std;



int main()
{
    int n,m;
    int eq1,eq2;
    int count=0;
    cin>>n>>m;
    int total=n+m;
    for(int a=0;a<total;a++){
        for(int b=0;b<total;b++){
            eq1=a*a+b;
            eq2=b*b+a;
            if(eq1==n&&eq2==m){
                count++;
            }
        }
    }


    cout<< count <<endl;

    return 0;
}
