class Solution {
public:
    vector<int> mostCompetitive(vector<int>& a, int k) {
        int n = a.size();
        vector<int> p(n);
        vector<int> s;
        for (int i = n - 1; i >= 0; --i) {
            for (; s.size() > 0 && a[i] <= a[s.back()]; s.pop_back());
            p[i] = (s.size() > 0 ? s.back() : n);
            s.push_back(i);
        }
        vector<int> result;
        int current = 0;
        for (int i = 0; i < k; ++i) {
            while (p[current] < n - k + i + 1) current = p[current];
            result.push_back(a[current]);
            ++current;
        }
        return result;
    }
};