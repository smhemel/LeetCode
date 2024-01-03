class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int numLen = nums.size();
        map<int,int>cnt;

        if (numLen <= k) {
            for (int i=0; i<numLen; i++) {
                if (++cnt[nums[i]] == 2) return true;
            }

            return false;
        }

        int index = 0;

        while(index <=k ) {
            if (++cnt[nums[index]] == 2) return true;
            index++;
        }

        for (int i=0; index<numLen; index++, i++) {
            cnt[nums[i]]--;
            if(++cnt[nums[index]] == 2) return true;
        }

        return false;
    }
};
