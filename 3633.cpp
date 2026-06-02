class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int minTime = INT_MAX;
        for (int i = 0; i < landStartTime.size(); ++i) { 
            int landEnd = landStartTime[i] + landDuration[i];
            for (int j = 0; j < waterStartTime.size(); ++j) {
                int waterEnd = waterStartTime[j] + waterDuration[j];
                int landFirst = max(landEnd, waterStartTime[j]) + waterDuration[j];
                int waterFirst = max(waterEnd, landStartTime[i]) + landDuration[i];
                minTime = min(minTime, min(landFirst, waterFirst));
            }
        }
        return minTime;
    }
};
