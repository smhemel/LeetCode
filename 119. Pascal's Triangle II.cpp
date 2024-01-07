class Solution {
public:
    vector<int> getRow(int rowIndex) {
        rowIndex++;
        vector<int>temp;
        temp.push_back(1);
        for (int i=2; i<=rowIndex; i++) {
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

            if (i == rowIndex) return singleRow;

            temp = singleRow;
        }

        return {1};
    }
};
