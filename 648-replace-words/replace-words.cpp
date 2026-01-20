class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> dict(dictionary.begin(), dictionary.end());

        stringstream ss(sentence);
        string word;
        vector<string> result;

        while (ss >> word) {
            string prefix = "";
            bool replaced = false;

            for (int i = 0; i < word.size(); i++) {
                prefix += word[i];
                if (dict.count(prefix)) {
                    result.push_back(prefix); 
                    replaced = true;
                    break;
                }
            }

            if (!replaced) {
                result.push_back(word);
            }
        }

        // join words with space
        string ans = "";
        for (int i = 0; i < result.size(); i++) {
            if (i > 0) ans += " ";
            ans += result[i];
        }

        return ans;
    }
};
