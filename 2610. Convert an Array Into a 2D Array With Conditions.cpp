class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int cnt[250];
        vector<int>temp;
        set<int>distinctNum;
        vector<vector<int>> ans;

        memset(cnt, 0, sizeof(cnt));
        for (auto val: nums) {
            distinctNum.insert(val);
            cnt[val]++;
        }
        
        while(!distinctNum.empty()) {
            temp.clear();
            vector<int>deleteNumbers;
            for (auto num: distinctNum) {
                if (cnt[num] > 0) {
                    temp.push_back(num);
                    cnt[num]--;

                    if (cnt[num] == 0) {
                        deleteNumbers.push_back(num);
                    }
                }
            }
            
            for(auto num: deleteNumbers) {
                distinctNum.erase(num);
            }

            ans.push_back(temp);
        }

        return ans;
    }
};
