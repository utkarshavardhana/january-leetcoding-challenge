class Solution {
public:
    string longestPalindrome(string s) {
        string res = "";
        int mxsz = 0;
        for(int i=0; i<2*s.size()-1; i++) {
            if(i%2) {
                for(int j=i/2, k=i/2+1; j>=0 and k<s.size(); j--, k++) {
                    if(s[j] == s[k]) {
                        if(k-j+1 > mxsz) {
                            mxsz = k-j+1;
                            res = s.substr(j, k-j+1);
                        }
                    } else break;
                }
            } else {
                if(mxsz < 1) {
                    mxsz = 1;
                    res = s[i/2];
                }
                for(int j=i/2-1, k=i/2+1; j>=0 and k<s.size(); j--, k++) {
                    if(s[j] == s[k]) {
                        if(k-j+1 > mxsz) {
                            mxsz = k-j+1;
                            res = s.substr(j, k-j+1);
                        }
                    } else break;
                }
            }
        }
        return res;
    }
};
