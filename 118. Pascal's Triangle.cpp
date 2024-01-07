class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int>temp;
        temp.push_back(1);
        ans.push_back(temp);
        for (int i=2; i<=numRows; i++) {
            vector<int> singleRow;
            if (i == 2) singleRow.push_back(1);

            for (int j=0; j<temp.size(); j++) {
                if ( j == 0 && temp.size() > 1) {
                    singleRow.push_back(temp[j]);
                    singleRow.push_back(temp[j+1]+temp[j]);
                }
                else if (j == temp.size()-1) singleRow.push_back(temp[j]);
                else singleRow.push_back(temp[j+1]+temp[j]);
            }

            ans.push_back(singleRow);
            temp = singleRow;
        }

        return ans;
    }
};
