class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n = arr.size();
        
        int right = n - 1;
        while (right > 0 && arr[right - 1] <= arr[right]) {
            right--;
        }

        if (right == 0) return 0;
        int min_length = right;
        
        for (int left = 0; left < n; left++) {
            if (left > 0 && arr[left - 1] > arr[left]) {
                break;
            }
            
            while (right < n && arr[left] > arr[right]) {
                right++;
            }
            
            int current_length = right - left - 1;
            min_length = min(min_length, current_length);
        }
        
        return min_length;
    }
};
