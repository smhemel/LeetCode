class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> filledBox,ans;
        for (int i=0; boxes[i]; i++)
            if (boxes[i] == '1') filledBox.push_back(i);
        
        for (int i=0; boxes[i]; i++) {
            int temp = 0;

            for(auto& ball: filledBox) {
                temp += abs(i - ball);
            }

            ans.push_back(temp);
        }

        return ans;
    }
};
