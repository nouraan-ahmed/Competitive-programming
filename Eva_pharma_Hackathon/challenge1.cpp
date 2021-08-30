#include <iostream>
#include <string>

using namespace std;

bool is_match(string s, string p){
    int s_ind=0,p_ind=0,star_ind=-1,match_ind=-1;
    while(s_ind<s.length()||(s_ind==s.length()&&p[p_ind]=='*')){
        if(p_ind<p.length()&&(p[p_ind]=='?'||p[p_ind]==s[s_ind])){
            p_ind++;
            s_ind++;
            star_ind=-1;
            match_ind=-1;
        }
        else if(p_ind<p.length()&&p[p_ind]=='*'){
            star_ind=p_ind;
            match_ind=s_ind;
            p_ind++;
        }
        else if(star_ind!=-1){
            s_ind++;
        }
        else{
            return false;
        }
    }
        return (p_ind == p.length());
}

int main()
{
    string s,p;
    cin>>s>>p;
    cout<< is_match(s,p);
}
