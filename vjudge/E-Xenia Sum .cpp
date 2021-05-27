#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<string> nums;
    int pos;
    string delimiter = "+";
    while(pos=s.find(delimiter)>=0&&s.length()>0){

        string num = s.substr(0, pos);
        nums.push_back(num);
        s.erase(0,pos+delimiter.length());

    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++){
        cout<<nums[i]<<"+";
    }
    cout<<nums[nums.size()-1];
}

