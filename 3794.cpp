class Solution {
public:
    string reversePrefix(string s, int k) {
        string c = s;
        for (int i = 0; i < k / 2; ++i) {
            char tmp = c[i];
            c[i] = c[k - i - 1];
            c[k - i - 1] = tmp;
        }
        return c;
    }
};
