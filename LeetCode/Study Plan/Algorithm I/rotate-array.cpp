class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> v(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            v[(i+k)%nums.size()]=nums[i];
        }
        copy(v.begin(),v.end(),nums.begin());
    }
};
