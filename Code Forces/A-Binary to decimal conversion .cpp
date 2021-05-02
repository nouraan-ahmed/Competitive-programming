#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string bin;
long long sum=0;
bool flag=true;
int main()
{
    cin>>bin;

    for(int j=0;j<bin.size();j++){
        if(!(bin[j]=='1'||bin[j]=='0')){
            flag=false;
            break;
        }
    }

    if(flag){
        for(int i=0;i<bin.size();i++){
            if(bin[i]=='1'){
                sum+=pow(2,bin.size()-1-i);
            }
        }
        cout << sum << endl;
    }
    else{
        cout<<"Error: The Number is not 0 or 1"<<endl;
    }

}
