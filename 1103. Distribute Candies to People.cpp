class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int n = num_people;
        vector<int> ans(n, 0);
        int i = 0, temp = 1;
        
        while(candies > 0) {
            if(i >= n && candies != 0) i = 0;
            if(temp < candies) {
                ans[i] += temp;
                candies -= temp;
            }
            else {
                ans[i] += candies;
                return ans;
            }

            i++;
            temp++;
        }

        return ans;
    }
};
