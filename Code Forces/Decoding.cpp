#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int length;
    string str;
    cin>>length;
    vector<char> letters;
    vector<char> lettersnew;
    char x;
    for(int i=0;i<length;i++){
        cin>>x;
        letters.push_back(x);
    }
    for(int i=0;i<letters.size();i++){
        if(length%2==0){
        	lettersnew.insert(lettersnew.begin(),letters[i]);
        	length--;
    }
        else{
        	lettersnew.insert(lettersnew.end(),letters[i]);
        	length--;
    }
    }
    for(int i=0;i<lettersnew.size();i++){
        str+=lettersnew[i];
    }
    cout<<str<<endl;
}

