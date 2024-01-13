#include <vector>
#include <string>

class Solution {
public:
    bool arrayStringsAreEqual(std::vector<std::string>& word1, std::vector<std::string>& word2) {
        int m = word1.size();
        int n = word2.size();

        int i = 0; // loop over characters in word1 string
        int j = 0; // loop over characters in word2 string

        int w1 = 0; // index of word1
        int w2 = 0; // index of word2

        while (w1 < m && w2 < n) {
            if (word1[w1][i] != word2[w2][j]) {
                return false;
            }
            i++;
            j++;

            if (i == word1[w1].size()) {
                i = 0;
                w1++;
            }
            if (j == word2[w2].size()) {
                j = 0;
                w2++;
            }
        }

        return w1 == m && w2 == n;
    }
};
