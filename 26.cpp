class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, last = -101;
        for (int j = 0; j < nums.size(); ++j) {
            if (nums[j] != last) {
                nums[i++] = nums[j];
                last = nums[j];
            }
        }
        return i;
    }
};
