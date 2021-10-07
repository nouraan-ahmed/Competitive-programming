class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int mid;
        int val;
        vector<int> v;
        int l=0;
        int r=numbers.size()-1;
        while(l<=r){
            if((numbers[l]+numbers[r])==target){
                v.push_back(l+1);
                v.push_back(r+1);
                break;
            }
            else if((numbers[l]+numbers[r])>target){
                r--;
            }
            else l++;
        }
        return v;
    }
};
