class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        int n = nums.size();

        for(int num : nums) mp[num]++;
        for(auto el: mp)
            if(el.second == 1)
                ans.push_back(el.first);

        return ans;
    }
};
