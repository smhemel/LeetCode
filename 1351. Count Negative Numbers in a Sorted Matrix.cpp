class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;

        for(int i = 0 ; i < grid.size() ; i++){
            int left = 0, right =  grid[i].size();
            while(left < right){
                int mid = (left + right)/2;
                if(grid[i][mid] >= 0) left = mid + 1;
                else right = mid;
            }

            ans += grid[i].size() - left;
        }
        
        return ans;
    }
};
