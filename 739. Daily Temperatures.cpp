class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> results(temperatures.size());
        stack<int> stack;

        for (int i = 0; i < temperatures.size(); i++) {
            while (!stack.empty() && temperatures[stack.top()] < temperatures[i]) {
                results[stack.top()] = i - stack.top();
                stack.pop();
            }

            stack.push(i);
        }

        return results;
    }
};
