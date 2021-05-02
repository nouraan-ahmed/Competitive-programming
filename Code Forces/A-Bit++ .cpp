#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string op;
    int x=0;

    for(int i=0;i<n;i++){
        cin>>op;

        bool plus=false;
        for(int j=0;j<3;j++){
            if(op[j]=='+')
                plus=true;
        }
        if(plus)
            x++;
        else
            x--;
    }
    cout<<x<<endl;
}
     


