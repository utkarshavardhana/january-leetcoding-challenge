class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int pos = -1;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]) {
                if(pos != -1 and i-pos <= k)   return false;
                pos = i;
            }
        }
        return true;
    }
};