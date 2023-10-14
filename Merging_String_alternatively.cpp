#include <iostream>
#include <string>

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string comb = "";
        int i = 0;
        while (i < word1.length() || i < word2.length()) {
            if (i < word1.length()) {
                comb += word1[i];
            }
            if (i < word2.length()) {
                comb += word2[i];
            }
            i++;
        }
        return comb;
    }
};

int main() {
    Solution solution;

    std::string word1 = "abc";
    std::string word2 = "123";

    std::string merged = solution.mergeAlternately(word1, word2);

    std::cout << "Merged string: " << merged << std::endl;

    return 0;
}
