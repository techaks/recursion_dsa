class Solution {
public:
    bool solve(int capacity, vector<int>& weights, int days) {
        int count = 1;
        int sum = 0;

        for (int w : weights) {
            if (sum + w > capacity) {
                count++;
                sum = w;
            } else {
                sum += w;
            }
        }

        return count <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        int res = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (solve(mid, weights, days)) {
                res = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return res;
    }
};