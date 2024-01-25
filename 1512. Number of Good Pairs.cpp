class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;

        map<int,int> mp;
        for(auto it:nums) mp[it]++;
        for(auto it:mp) ans+=(it.second-1)*(it.second)/2;

        return ans;
    }
};
