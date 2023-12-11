class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]==nums[j] && count<2){
                count++;
                i++;
                nums[i]=nums[j];
            }
            else if(nums[i]!=nums[j]){   
                count=1;
                i++;
                nums[i]=nums[j];
                // count++;
                
            }
            else
            continue;
            }
        return i+1;
    }
};