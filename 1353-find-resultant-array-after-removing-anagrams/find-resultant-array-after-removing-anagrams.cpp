class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> result;
        string prevSorted = "";
        for (string &w : words) {
            string s = w;
            sort(s.begin(), s.end());
            if (s != prevSorted) {
                result.push_back(w);
                prevSorted = s;
            }
        }
        return result;
    }
};
