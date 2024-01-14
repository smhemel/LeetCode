class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int>v1(26,0);
	    vector<int>v2(26,0);

        for (int i=0; i<target[i]; i++) v1[target[i]-'a']++;
        for (int i=0; s[i]; i++) v2[s[i]-'a']++;

        for(int i=0; i<26; i++)
            if(v1[i] > 0) v2[i] = v2[i] / v1[i];

        int ans=INT_MAX;
        unordered_set<char>st(target.begin(),target.end());
        for(auto ch : st) ans=min(ans, v2[ch-'a']);

        return ans;
    }
};
