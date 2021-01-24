class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        map<int, vector<int>> m;
        for(int i=0; i<mat.size(); i++) {
            for(int j=0; j<mat[0].size(); j++) {
                m[i-j].push_back(mat[i][j]);
            }
        }
        for(auto it=m.begin(); it!=m.end(); it++) {
            sort((*it).second.rbegin(), (*it).second.rend());
        }
        for(int i=0; i<mat.size(); i++) {
            for(int j=0; j<mat[0].size(); j++) {
                mat[i][j] = m[i-j].back();
                m[i-j].pop_back();
            }
        }
        return mat;
    }
};