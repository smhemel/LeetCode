class Solution {
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        ans = 0;
        explore(nums, k, 0);
        return ans - 1;
    }

private:
    int ans;
    unordered_map<int, int> visited;

    void explore(vector<int>& nums, int k, int index) {
        if (index == nums.size()) {
            ans++;
            return;
        }

        int num = nums[index];
        if (visited.find(num - k) == visited.end() &&
            visited.find(num + k) == visited.end()) {
            visited[num]++;
            explore(nums, k, index + 1);
            visited[num]--;
            if (visited[num] == 0) visited.erase(num);
        }

        explore(nums, k, index + 1);
    }
};
