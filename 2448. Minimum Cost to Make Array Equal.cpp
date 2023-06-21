class Solution {

public:
    vector<pair<long long,long long int>>v1;
    long long int prefixCost[211111];

    static bool comp(pair<int,int> a, pair<int, int> b) {
        return (a.first < b.first);
    }

    long long minCost(vector<int>& nums, vector<int>& cost) {
        int len = nums.size();
        for (int i=0; i<len; i++) {
            v1.push_back(make_pair(nums[i], cost[i]));
        }

        sort(v1.begin(), v1.end(), comp);

        prefixCost[0] = v1[0].second;
        for (int i=1; i<len; i++) {
            prefixCost[i] = v1[i].second + prefixCost[i-1];
        }

        long long int totalCost = 0;

        for (int i=1; i<len; i++) {
            int gap = v1[i].first - v1[0].first;
            totalCost += v1[i].second * gap;
        }

        long long int answer = totalCost;

        for (int i=1; i<len; i++) {
            int gap = v1[i].first - v1[i-1].first;
            totalCost += prefixCost[i-1] * gap;
            totalCost -= (prefixCost[len-1] - prefixCost[i-1]) * gap;
            answer = min(answer,totalCost);
        }
        
        return answer;
    }
};
