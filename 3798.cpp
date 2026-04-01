class Solution {
public:
    string largestEven(string s) {
        while (s.size() && s.back() == '1') {
            s.pop_back();
        }
        return s;
    }
};
