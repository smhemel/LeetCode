class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.size(), n = t.size();

        unordered_map<char, int> freq;
        for(int i=0; i<n; i++) freq[t[i]]++;

        unordered_map<char, deque<int>> pos;
        set<int> st;
        pair<int, int> ans_ind = {0, INT_MAX}, initial;

        initial = ans_ind;

        for(int i=0; i<m; i++){
            if(freq[s[i]] > 0){
                pos[s[i]].push_back(i);

                st.insert(i);

                if(pos[s[i]].size() > freq[s[i]]){
                    int first = pos[s[i]].front();
                    pos[s[i]].pop_front();
                    st.erase(first);
                }

                if(st.size() == n){
                    if(i - *st.begin() < ans_ind.second - ans_ind.first) {
                        ans_ind = {*st.begin(), i};
                    }
                }
            }
        }

        if(ans_ind == initial) return "";

        string ans = s.substr(ans_ind.first, ans_ind.second - ans_ind.first + 1);
        return ans;
    }
};
