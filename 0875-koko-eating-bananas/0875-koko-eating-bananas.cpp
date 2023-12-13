class Solution {
public:
    long long cntHrs(vector<int>& piles, int hours){
        long long totalHrs = 0;
        for(int i=0; i<piles.size(); i++){
            totalHrs += ceil((double)piles[i]/hours);
        }
        return totalHrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(), piles.end());
        int start = 1, end = maxi, mid;
        long long ans = 1 ;
        while(start<=end){
            mid=start + ((end-start)/2);
            if(cntHrs(piles, mid) <= h){
                ans = mid;
                end = mid-1;
            }
            else if(cntHrs(piles, mid) > h)
                start = mid + 1;
        }
        return ans;
    }
};