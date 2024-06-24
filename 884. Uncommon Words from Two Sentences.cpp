class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mp;
        vector<string> ans;
        string temp = "";
        for (auto i : s1) {
            if (i != ' ') temp.push_back(i);
            else mp[temp]++, temp = "";
        }

        mp[temp]++;
        temp = "";

        for (auto& i : mp) if (i.second > 1) i.second = 0;
        for (auto i : s2) {
            if (i != ' ') temp.push_back(i);
            else {
                if (mp.count(temp)) mp[temp]--;
                else mp[temp]++;
                temp = "";
            }
        }
        if (mp.count(temp)) mp[temp]--;
        else mp[temp]++;

        for (auto i : mp) if (i.second == 1) ans.push_back(i.first);
        
        return ans;
    }
};
