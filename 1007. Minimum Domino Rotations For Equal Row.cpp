class Solution 
{
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int result = check(tops[0], tops, bottoms);

        if (result != -1) return result;
        return check(bottoms[0], tops, bottoms);
    }

private:
    int check(int target, vector<int>& tops, vector<int>& bottoms) {
        int rotateTop = 0;
        int rotateBottom = 0;

        for (int i = 0; i < tops.size(); i++) {
            if (tops[i] != target && bottoms[i] != target) 
                return -1;
            
            if (tops[i] != target)
                rotateTop++;

            if (bottoms[i] != target)
                rotateBottom++;
        }

        return min(rotateTop, rotateBottom);
    }
};
