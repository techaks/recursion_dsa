class Solution {
public:
    bool isPowerOfFour(int n) {
        long long temp = 1;
       
        if (n == 1)
            return true;
        if (n < 4)
            return false;

        while (temp < n) {
            temp = temp * 4;

            if (temp == n)
                return true;
        }

        return false;
    }
};