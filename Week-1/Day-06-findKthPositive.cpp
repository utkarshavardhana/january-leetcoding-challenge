class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        int num = 1;
        for(int i : arr) {
            if(i >= num) {
                if(i-num >= k)   return num+k-1;
                k -= i-num;
                num = i+1;
            }
        }
        return num+k-1;
    }
};
