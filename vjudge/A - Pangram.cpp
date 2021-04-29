#include <string>
#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int n;
    int flag=0;

    char arr[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string s;
    std::cout << "Enter n" << std::endl;
    cin>>n;
    cout<<"Enter text"<<endl;
    cin>>s;
    if(n<26){
        cout<<"NO";
    }
    else{
        for(int j=0;j<26;j++) {
            flag=0;
            for(int i=0;i<n;i++){

                if (toupper(arr[j])==toupper(s[i])){
                    flag=1;
                    break;
                }

            }

            if(flag==0){
                break;
            }
        }
        if(flag==0){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
    }

    return 0;
}
