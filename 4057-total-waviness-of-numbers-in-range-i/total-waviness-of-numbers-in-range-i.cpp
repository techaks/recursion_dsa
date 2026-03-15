class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int res = 0;

        for (int i = num1; i <= num2; i++) {
            string curr = to_string(i);

            for (int j = 1; j < curr.size() - 1; j++) {
                if ((curr[j - 1] < curr[j] && curr[j + 1] < curr[j]) ||
                    (curr[j - 1] > curr[j] && curr[j + 1] > curr[j]))
                    res++;
            }
        }

        return res;
    }
};