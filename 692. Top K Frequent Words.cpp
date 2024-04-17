class Solution {
public:
    static bool comp(pair<string,int>& a, pair<string,int>& b) {
        if (a.second == b.second) {
            return a.first < b.first;
        }
        return a.second > b.second;
    }

    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> M;
        vector<string> ans;
        for (auto word: words) M[word]++;
        
        vector<pair<string,int>> sortedM;

        for (auto& it: M) sortedM.push_back(it);

        sort(sortedM.begin(), sortedM.end(), comp);

        for (int i=0; i<k; i++) ans.push_back(sortedM[i].first);

        return ans;
    }
};
