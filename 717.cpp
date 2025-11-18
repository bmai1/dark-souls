class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        if (n > 1) {
            int one_count = 0;
            int i = n - 2;
            while (i >= 0 && bits[i] == 1) {
                one_count++;
                i--;
            }
            if (one_count % 2 == 1) return false;
        }
        return true;
    }
};
