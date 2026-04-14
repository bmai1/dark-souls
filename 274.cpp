class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        vector<int> freq(n + 1);
        for (int c : citations) {
            freq[min(c, n)]++;
        }
        int total = 0;
        for (int i = n; i >= 0; --i) {
            total += freq[i];
            if (total >= i) {
                return i;
            }
        }
        return 0;
    }
};
