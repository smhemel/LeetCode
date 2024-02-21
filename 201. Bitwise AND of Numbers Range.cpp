class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int temp = 0;
       while(left < right){
           left >>= 1;
           right >>= 1;
           temp++;
       }

       return left << temp;
    }
};
