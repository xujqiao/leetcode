#include <iostream>
#include <string>
#include <queue>

using namespace std;

namespace ns5 {

    class Solution {
    public:
        string longestPalindrome(string s) {
            queue<int> palindromes;
            for (int i = 0; i < s.length();) {
                int j = i;
                while (j + 1 < s.length() && s[j] == s[j + 1]) {
                    ++j;
                }
                palindromes.push(i);
                palindromes.push(j);
                i = j + 1;
            }

            int left = -1, right = -1;
            int ansLeft = 0, ansRight = 0;
            while (!palindromes.empty()) {
                left = palindromes.front();
                palindromes.pop();
                right = palindromes.front();
                palindromes.pop();

                if (right - left > ansRight - ansLeft) {
                    ansRight = right;
                    ansLeft = left;
                }

                if (left == 0 || right == s.length() - 1) {
                    continue;
                }

                if (s[left - 1] == s[right + 1]) {
                    palindromes.push(left - 1);
                    palindromes.push(right + 1);
                }
            }

            return s.substr(ansLeft, ansRight - ansLeft + 1);
        }
    };

};



