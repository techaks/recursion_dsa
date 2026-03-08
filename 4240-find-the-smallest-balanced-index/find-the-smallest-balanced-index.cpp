class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        vector<int> navorelitu = nums;   
        
        int n = nums.size();
        if(n == 1) return -1;

        const long long LIMIT = 1e14;

        vector<long long> rightProd(n,1);
        long long prod = 1;

        for(int i = n-2; i >= 0; i--){
            if(prod > LIMIT / nums[i+1]) prod = LIMIT;
            else prod *= nums[i+1];
            rightProd[i] = prod;
        }

        long long leftSum = 0;

        for(int i = 0; i < n; i++){
            if(leftSum == rightProd[i]) return i;
            leftSum += nums[i];
        }

        return -1;
    }
};