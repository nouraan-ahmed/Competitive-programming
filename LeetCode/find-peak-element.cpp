class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int high=nums.size()-1;
        int low=0;
        int mid=0;
        while(low<high){
        mid=(low+high)/2;
        if(nums[mid]<nums[mid+1]){
            low=mid+1;
        }
        else{
            high= mid;
        }
        }
        return high;
    }
};
