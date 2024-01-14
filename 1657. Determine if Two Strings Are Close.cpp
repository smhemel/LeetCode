class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        set<char>s1,s2;
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        
        if(n!=m) return false;

        for(int i=0; i<n; i++){
            s1.insert(word1[i]);
            s2.insert(word2[i]);
            v1[word1[i]-'a']++;
            v2[word2[i]-'a']++;
        }

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(s1==s2 && v1==v2) return true;

        return false;
    }
};
