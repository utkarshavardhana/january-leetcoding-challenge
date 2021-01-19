class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int count = 0;
        int lo = 0, hi = nums.size()-1;
        while(lo < hi) {
            if(nums[lo] + nums[hi] == k) {
                count++;
                lo++;
                hi--;
            } else if(nums[lo] + nums[hi] < k) {
                lo++;
            } else {
                hi--;
            }
        }
        return count;
    }
};
