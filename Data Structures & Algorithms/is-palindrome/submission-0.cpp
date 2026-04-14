class Solution {
public:
    bool isPalindrome(string s) {
        int a[1002];
        int count = 0;
        for (int i = 0; i < (int)s.length(); ++i) {
            char c = s[i];
            if ( (c >= 'a' && c <= 'z') ||
                 (c >= 'A' && c <= 'Z') ||
                 (c >= '0' && c <= '9') ) {
                a[count++] = tolower(c) - 'a';
            }
        }

        for (int i = 0; i < count / 2; ++i) {
            if (a[i] != a[count - 1 - i]) return false;
        }
        return true;
    }
};