#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int n;
    int x;
    int count = 1;
    int maxx = 1;
    cin>>n;
    vector<int> heights;
    for(int i=0;i<n;i++){
        cin>>x;
        heights.push_back(x);
    }
    for(int j=0;j<n;j++){
    count=1;
        for(int k=j;k>0;k--){
            if((heights[k] >= heights[k-1])){
                count++;
            }
            else{
                break;
            }
        }
        for(int k=j;k<n-1;k++){
            if((heights[k] >= heights[k+1])){
                count++;
            }
            else{
                break;
            }
        }
        maxx=max(count,maxx);
    }
    cout << maxx <<endl;
}

