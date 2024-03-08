class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int ans = 0;
        int maxDiagonal = 0;

        for (auto dimension: dimensions) {
            int diagonal = dimension[0]*dimension[0] + dimension[1]*dimension[1];

            if(diagonal > maxDiagonal){
                maxDiagonal = diagonal;
                ans = dimension[0]*dimension[1];
            }else if(diagonal == maxDiagonal){
                ans = max(ans,dimension[0]*dimension[1]);
            }
        }

        return ans;
    }
};
