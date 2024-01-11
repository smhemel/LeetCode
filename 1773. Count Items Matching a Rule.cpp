class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ans = 0;
        for (auto item: items) {
            if(ruleKey == "type" && ruleValue == item[0]) ans++;
            else if (ruleKey == "color" && ruleValue == item[1]) ans++;
            else if (ruleKey == "name" && ruleValue == item[2]) ans++;
        }

        return ans;
    }
};
