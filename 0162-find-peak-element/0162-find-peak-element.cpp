class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n= nums.size();

        // only one element
        if(n==1) return 0;

        //first and last element
        if(nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;

        // between first and last ele
        int start=1, end=n-2, mid;
        while(start <= end){
            mid = start + ((end-start)/2);
            if(mid > 0 && mid < n-1){
                if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
                   return mid;
                }
                else if(nums[mid]<nums[mid+1]){
                    start = mid + 1;
                }
                else if(nums[mid-1] > nums[mid]){
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};