class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // unordered_map<int,int> mp;
        // for(int i=0; i<nums.size(); i++){
        //     mp[nums[i]]++;
        // }
        // for(int i=0; i<nums.size(); i++){
        //     int comp=target-nums[i];
        //     if(mp[comp]==1){
        //         return comp;
        //     }
        // }

        // int i=0;
        // for (int j=i+1;j<nums.size();j++){
        //     int result=nums[i]+nums[j];
        //     if(result==target){
        //         return {i,j};
        //     }
        // }
        // i++;
        // twoSum(nums, target);

        
        for(int i=0; i<nums.size(); i++){
            int ans = target - nums[i];
            for(int j=i+1; j<nums.size(); j++){
                if(ans==nums[j]){
                    return {i,j};
                }
            } 
        }
        return {};
    }
};