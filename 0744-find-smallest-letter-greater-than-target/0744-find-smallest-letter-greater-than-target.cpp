class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // using bs
        int start=0, n=letters.size(), end=n-1;
        char ans=letters[0];
        while(start<=end){
            int mid=start+((end-start)/2);
            if(letters[mid]<=target){
                start=mid+1;
            }
            else if(letters[mid]>target){
                ans=letters[mid];
                end=mid-1;
            }
        }
        return ans;
    }
};