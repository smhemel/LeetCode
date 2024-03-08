class Solution {
public:
    bool binary_search(vector<int> nums, int num) {
        int left = 0, right = nums.size();
        while (left < right) {
            int mid = (left + right) / 2;
            if ( nums[mid] == num) return true;
            else if (nums[mid] < num) left = mid + 1;
            else right = mid; 
        }

        return false;
    }

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> M;
        vector<int> ans;

        for(int i=0; i<=1000; i++) M[i] = 0;
        sort(nums1.begin(), nums1.end());

        for(auto num: nums2) {
            if (!M[num] && binary_search(nums1, num)) {
                ans.push_back(num);
                M[num] = 1;
            }
        }

        return ans;
    }
};
