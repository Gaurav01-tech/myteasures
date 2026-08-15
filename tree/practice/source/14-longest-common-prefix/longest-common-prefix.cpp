class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        int pos = 0;

        for (int j = 0; j < strs[0].length(); j++) {
            char ch = strs[0][j];

            for (int i = 1; i < strs.size(); i++) {
                if (j >= strs[i].length() || strs[i][j] != ch) {
                    return res;
                }
            }

            res += ch;
        }

        return res;
    }
};