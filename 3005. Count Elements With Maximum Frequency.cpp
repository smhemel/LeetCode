class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxFreq=0, ans=0;
        vector<int> frequency(101,0);

        for(auto num: nums) frequency[num]++;
        for(int i=1; i<101; i++) 
            maxFreq = max(maxFreq,frequency[i]);
        for(int i=1; i<101; i++)
            if(frequency[i] == maxFreq)
                ans += frequency[i];
                
        return ans;
    }
};
