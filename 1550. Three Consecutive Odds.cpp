class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        string binaryString;
        for (int num : arr) {
            binaryString += (num % 2) ? '1' : '0';
        }
        return binaryString.find("111") != string::npos;
    }
};
