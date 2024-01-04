class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int cnt = 1, ans = 0;
        int numLen = nums.size();

        for (int i=1; i<numLen; i++) {
            if(nums[i-1] != nums[i]) {
                cout << cnt << endl;
                if(cnt&1 && cnt/2 == 0) return -1;
                else if (cnt%3 == 0) ans += cnt/3;
                else {
                    int temp = cnt/2;
                    int rem = cnt%2;
                    if (rem == 1) {
                        ans++;
                        temp--;
                    }

                    ans += ((temp/3)*2 + temp%3);
                }

                cnt = 1;
            }
            else cnt++;
        }

        if(cnt&1 && cnt/2 == 0) return -1;
        else if (cnt%3 == 0) ans += cnt/3;
        else {
            int temp = cnt/2;
            int rem = cnt%2;
            if (rem == 1) {
                ans++;
                temp--;
            }

            ans += ((temp/3)*2 + temp%3);
        }

        return ans;
    }
};
