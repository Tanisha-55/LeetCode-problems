class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left=0, mid=0, right=nums.size()-1;
        while(mid <= right){
            
                if(nums[mid]==0){
                    swap(nums[mid], nums[left]);
                    left++; mid++;
                }
                else if(nums[mid]==1){
                    mid++;
                }
                else if(nums[mid]==2){
                    swap(nums[mid], nums[right]);
                    right--;
                }
        }
    }
};