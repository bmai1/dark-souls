class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int zero_count = k;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 1) {
                if (zero_count < k) {
                    return false;
                }
                zero_count = 0;
            }
            else {
                zero_count++;
            }
        }
        return true;
    }
};
