class Solution {
public:
    int M = 1e9+7;
    int concatenatedBinary(int n) {
        long res = 0;

        for(int num = 1 ; num <= n ; num++){
            int digit = log2(num)+1;
            res = ((res<<digit)%M+num)%M;
        }
        
        return res;
    }
};