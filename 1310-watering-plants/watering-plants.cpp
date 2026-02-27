class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int temp =  capacity;
        int step = 0;
        int n = plants.size();

        for (int i = 0; i < n; i++) {
            if (plants[i] <= capacity) {
                step++;

            } else {
                step += i * 2 + 1;
                capacity = temp;
            }
            capacity -= plants[i];
        }

        return step;
    }
};