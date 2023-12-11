class Solution {
public:
    int findMin(vector<int>& nums) {
        // O(logn)
        int start=0, n=nums.size(), end=n-1;
        while(start<=end){
            int mid = (start + end)  / 2;
            if(nums[start]<=nums[end])
                return nums[start];

            int prev = ( mid + n - 1 ) % n;
            int next = ( mid + 1 ) % n;
            if( nums[mid]<=nums[next] && nums[prev] >= nums[mid] )
                return nums[mid];

            else if(nums[start]<=nums[mid]){
                start=mid+1;
            }
            else if(nums[mid]<=nums[end]){
                end=mid-1;
            }
        }
        return 0;
    }
};