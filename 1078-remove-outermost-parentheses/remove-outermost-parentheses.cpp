class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string output = "";
        for (char& str : s) {
            if (str == '(') {
                if (count != 0)
                    output.push_back(str);
                count++;
            } else {
                count--;
                if (count != 0)
                    output.push_back(str);
            }
        }

        return output;
    }
};