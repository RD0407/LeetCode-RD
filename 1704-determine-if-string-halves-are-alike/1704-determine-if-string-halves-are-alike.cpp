class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length() / 2;

        int left(0);
        int right(0);
        int i(0);
        int j(n);

        while (i < n && j < 2 * n) {
            if (isVowel(s[i])) left++;
            if (isVowel(s[j])) right++;

            i++;
            j++;
        }
        return left == right;
    }

private:
    bool isVowel(char& ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    }
};
