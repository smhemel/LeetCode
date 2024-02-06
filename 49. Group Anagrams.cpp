class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> groups_mp;
        vector<vector<string>> ans;
        int k = 0;

        for(int i=0; i<strs.size(); i++){
            vector<int> freq(26, 0);

            for(auto ch: strs[i]) freq[ch-'a']++; 

            groups_mp[freq].push_back(strs[i]);
        }

        for(auto it: groups_mp) 
            ans.push_back(it.second);

        return ans;
    }
};
