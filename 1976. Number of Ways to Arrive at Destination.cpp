class Solution {
public:
    int MOD = 1e9 + 7;
    
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> graph(n);
        for (auto& road: roads) {
            graph[road[0]].emplace_back(road[1], road[2]);
            graph[road[1]].emplace_back(road[0], road[2]);
        }

        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> minHeap;
        vector<long long> shortestTime(n, LLONG_MAX);
        vector<int> ways(n, 0);

        ways[0] = 1;
        shortestTime[0] = 0;
        minHeap.emplace(0, 0);

        while (!minHeap.empty()) {
            auto [time, node] = minHeap.top();
            minHeap.pop();

            if (time > shortestTime[node]) continue;

            for (auto [neighbor, travelTime]: graph[node]) {
                long long newTime = time + travelTime;

                if(newTime < shortestTime[neighbor]) {
                    shortestTime[neighbor] = newTime;
                    ways[neighbor] = ways[node];
                    minHeap.emplace(newTime, neighbor);
                } else if(newTime == shortestTime[neighbor]) {
                    ways[neighbor] = (ways[neighbor] + ways[node]) % MOD;
                }
            }
        }

        return ways[n - 1];
    }
};
