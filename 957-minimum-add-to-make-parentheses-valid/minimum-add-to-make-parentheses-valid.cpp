class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> s1;
        int count = 0;

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == '(') {
                s1.push(s[i]);
            }

            if(s[i] == ')') {
                if(!s1.empty()) {
                    s1.pop();
                }
                else {
                    count++;
                }
            }
        }

        return count + s1.size();
    }
};