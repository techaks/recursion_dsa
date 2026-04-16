class Solution {
public:
    int count(int num, int digit) {
        int total = 0;

        string temp = to_string(num);
        for (char ch : temp) {
            if (ch - '0' == digit)
                total++;
        }

        return total;
    }

    int countDigitOccurrences(vector<int>& nums, int digit) {
        int res = 0;

        for (int num : nums) {
            res += count(num, digit);
        }

        return res;
    }
};