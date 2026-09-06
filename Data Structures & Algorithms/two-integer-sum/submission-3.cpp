class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map <int,int> mp;

        for(int i=0;i<nums.size();i++)
        {
            int diff=target-nums[i];

           if(mp.contains(diff)){return {mp[diff],i};}
           mp[nums[i]]=i;//storing the index value in the place of value and elemets in the key plavce in the map
        }

    }
};
