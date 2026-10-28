
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();

        for (int i = 0; i < n; i++) {
            s[i] = tolower(s[i]);
        }

        int left = 0, right = n - 1;

        while (left < right) {
            if (!isalnum(s[left])) {
                left++;
            }
            else if (!isalnum(s[right])) {
                right--;
            }
            else if (s[left] == s[right]) {
                left++;
                right--;
            }
            else {
                return false;
            }
        }

        return true;
    }
};
