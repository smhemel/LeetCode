class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int winner = 0, cnt = 1, arrLen = arr.size();
        winner = max(arr[0],arr[1]);
        int previousWinner = winner;
        if (cnt == k) return winner;

        for (int i=2; i<arrLen; i++) {
            winner = max(winner, arr[i]);

            if (winner == previousWinner) cnt++;
            else {
                cnt = 1;
                previousWinner = winner;
            }

            if (cnt == k) return winner;
        }

        return winner;
    }
};
