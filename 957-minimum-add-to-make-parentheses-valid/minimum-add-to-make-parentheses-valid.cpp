class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> S;
        int count = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                S.push(s[i]);
            }
            else {
                if(!S.empty()) {
                    S.pop();
                }
                else {
                    count++;
                }
            }
        }

        return count + S.size();
    }
};