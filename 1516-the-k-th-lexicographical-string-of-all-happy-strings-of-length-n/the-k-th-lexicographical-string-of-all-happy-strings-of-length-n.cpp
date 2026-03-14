class Solution {
public:
    void solve(string& res, string& curr, int n, int k, int& counter) {
        if (curr.length() == n) {
            counter++;
            if (counter == k) {
                res = curr;
            }
            return;
        }

        for (char ch = 'a'; ch <= 'c'; ch++) {
            if( !curr.empty() && ch==curr.back())continue;

            // do
            curr.push_back(ch);

            // explore
            solve(res, curr, n, k, counter);

            // undo
            curr.pop_back();
        }
    }
    string getHappyString(int n, int k) {

        string res = "";
        string curr = "";
        int counter = 0;

        solve(res, curr, n, k, counter);
        return res;
    }
};