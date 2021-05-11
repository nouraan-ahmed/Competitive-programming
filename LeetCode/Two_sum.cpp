class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> n;
        bool flag=0;
        for(int j=0;j<nums.size();j++){
        for(int i=1;i<nums.size();i++){
            if(nums[j]+nums[i]==target&&i!=j){
                n.push_back(j);
                n.push_back(i);
               flag=1;
                break;
            }
        }
            if(flag) break;
        }
        return n;
    }
};
