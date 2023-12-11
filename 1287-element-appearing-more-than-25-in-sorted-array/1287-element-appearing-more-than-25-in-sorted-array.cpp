class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int, int> counts;
        for (int i : arr) {
            counts[i]++;
        }
        
        int target = arr.size() / 4;
        for (auto x: counts) {
            if (x.second > target) {
                return x.first;
            }
        }
        
        return -1;
    }
};