class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();
        int one = 0;
        for (int c = 0; c < n; c++) {
            if (s[c] == '1') {
                one++;
                s[c] = '0';
            }
        }

        if (one) {
            s[n - 1] = '1';
            one--;
        }

        int i = 0;
        while (one--) {
            s[i++] = '1';
           
        }

        return s;
    }
};