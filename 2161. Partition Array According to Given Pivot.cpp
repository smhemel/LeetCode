class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less, high, result(nums.size());
        int count = 0;

        for(int num : nums) {
            if(num < pivot) less.push_back(num);
            else if(num == pivot) count++;
            else high.push_back(num);
        }

        int index = 0;
        for(int num : less) result[index++] = num;
        for(int i = 0; i < count; i++) result[index++] = pivot;
        for(int num : high) result[index++] = num;

        return result;
    }
};
