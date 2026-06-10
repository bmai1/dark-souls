class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        vector<int> values;
        int n = nums.size();
    
        // track max/min value in subarray, choose k distinct ones with highest values
        for (int l = 0; l < n; ++l) {
            int max_curr = INT_MIN, min_curr = INT_MAX; 
            for (int r = l; r < n; ++r) {
                for (int j = l; j <= r; ++j) {
                    max_curr = max(max_curr, nums[j]);
                    min_curr = min(min_curr, nums[j]);
                    values.push_back(max_curr - min_curr);
                }
            }
        }

        sort(values.rbegin(), values.rend());
        
        long long total = 0;
        for (int i = 0; i < k; ++i) {
            total += values[i];
        }
        
        return total;
    }
};
