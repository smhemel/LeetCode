class Solution {
private:
    int maxHeightUtil(int red, int blue, int level, bool isRedTurn){
        if (red < 0 || blue < 0) return level - 1;
        
        if (isRedTurn) red -= level;
        else blue -= level;
        
        return maxHeightUtil(red, blue, level + 1, !isRedTurn);
    }

public:
    int maxHeightOfTriangle(int red, int blue) {
        return max(maxHeightUtil(red, blue, 1, true), maxHeightUtil(red, blue, 1, false)) - 1;
    }
};
