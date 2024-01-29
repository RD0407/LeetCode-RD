class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int result = 0;

        // Traverse the string from the end
        for (int i = n - 1; i >= 0; i--) {
            // Skip trailing spaces
            if (s[i] == ' ' && result == 0) {
                continue;
            }

            // Increment the length of the last word
            if (s[i] != ' ') {
                result++;
            } else {
                // Break when a space is encountered after the last word
                break;
            }
        }

        return result;
    }
};
