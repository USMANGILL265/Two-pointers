class Solution {
public:
    string reverseStr(string s, int k) {
        int l = 0;
        int r = min(k, (int)s.length());
        while (l < s.length()) {
            reverse(s.begin() + l, s.begin() + r);
            l += 2 * k;
            r = min(l + k, (int)s.length());
        }
        return s;
    }
};