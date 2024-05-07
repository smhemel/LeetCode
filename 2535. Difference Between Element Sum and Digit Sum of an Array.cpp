class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eleSum = 0, digiSum = 0;

        for(auto num: nums) {
            eleSum += num;

            while(num > 0) {
                digiSum += num%10;
                num /= 10;
            }
        }

        return abs(eleSum - digiSum);
    }
};
