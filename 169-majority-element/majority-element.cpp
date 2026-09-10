class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        set<int> s(nums.begin(), nums.end());
        int max = n / 2;
        for (int x : s) {
            int cnt = count(nums.begin(), nums.end(), x);
        
        if (cnt > max) {
            return x;
        }
    }
    return -1;
    }
};