
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.size();
        stack<int> S;

        for(int i = 0; i < n; i++) {
            if(s[i] == '(') {
                S.push(i);
            }
            else if(s[i] == ')') {
                if(S.empty()) {
                    s[i] = '#';
                }
                else {
                    S.pop();
                }
            }
        }

        while(!S.empty()) {
            s[S.top()] = '#';
            S.pop();
        }

        string ans = "";
        for(int i = 0; i < n; i++) {
            if(s[i] != '#') {
                ans += s[i];
            }
        }

        return ans;
    }
};
