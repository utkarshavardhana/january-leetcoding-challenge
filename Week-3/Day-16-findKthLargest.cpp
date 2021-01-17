class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>> pq(nums.begin(), nums.end());
        while(--k)  pq.pop();
        return pq.top();
    }
};
