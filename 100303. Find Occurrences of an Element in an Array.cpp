class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> occurrences;
    
        for (int i = 0; i < nums.size(); ++i)
            if (nums[i] == x) occurrences.push_back(i);
    
        vector<int> answer;
    
        for (int query : queries) {
            if (query > 0 && query <= occurrences.size()) {
                answer.push_back(occurrences[query - 1]);
            } else {
                answer.push_back(-1);
            }
        }

        return answer;
    }
};
