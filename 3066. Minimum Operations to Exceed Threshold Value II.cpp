class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq(nums.begin(), nums.end());
    
        long long operations = 0;
        while (pq.top() < k) {
            if (pq.size() < 2) {
                return -1; // Not possible to make all elements >= k
            }
            long long x = pq.top(); pq.pop();
            long long y = pq.top(); pq.pop();
            long long new_num = min(x, y) * 2 + max(x, y);
            pq.push(new_num);
            operations++;
        }

        return operations;
    }
};
