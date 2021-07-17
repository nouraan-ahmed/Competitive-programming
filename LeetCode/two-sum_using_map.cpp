class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int> my_map;
        vector<int> vec;
       for(int i=0;i<nums.size();i++){
           my_map[nums[i]]=i;
       }
        for(int i=0;i<nums.size();i++){
        if(my_map.count(target-nums[i])&&i!=my_map.find(target-nums[i])->second){
            vec={i,my_map.find(target-nums[i])->second};
            return vec;
            }
        }
        return vec;
    }
};
