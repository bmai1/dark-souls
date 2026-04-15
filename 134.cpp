class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // int n = gas.size();
        // for (int i = 0; i < n; ++i) {
        //     bool passed = false;
        //     int j = i;
        //     int gas_left = 0;
        //     while (j <= n) {
        //         if (!passed && j == n) {
        //             passed = true;
        //             j = 0;
        //         }
        //         if (passed) {
        //             if (j > i) break;
        //             if (j == i) return i;
        //         }
        //         gas_left += gas[j];
        //         if (cost[j] <= gas_left) {
        //             gas_left -= cost[j];
        //             j++;
        //         }
        //         else break;
        //     }
        // }
        // return -1;

        int n = gas.size(), gas_re = 0, stops = 0;
        for (int i = 0; i < n * 2; ++i) {
            if (stops == n) return i % n;
            gas_re += gas[i % n];
            if (gas_re < cost[i % n]) {
                gas_re = 0;
                stops = 0;
            }
            else {
                gas_re -= cost[i % n];
                ++stops;
            }
        }
        return -1;
    }
};
