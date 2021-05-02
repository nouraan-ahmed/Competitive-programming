#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    string res;
    cin>>n;
    transform(n.begin(), n.end(), n.begin(), ::tolower);
    for(int i=0;i<n.size();i++){
        if(n[i]=='a'||n[i]=='o'||n[i]=='y'||n[i]=='e'||n[i]=='u'||n[i]=='i'){
            n.erase(i,1);
            i--;
        }
    }
    for(int g=0;g<n.size();g++){
        res+=".";
        res+=n[g];
    }
    cout<<res<<endl;
}
