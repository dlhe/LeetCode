#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
    bool isScramble(string s1, int i, string s2, int j, int n) {
        if (n == 1) return s1[i] == s2[j];
        if (b[i][j][n] >= 0) return b[i][j][n] == 1;
        cout << i << "," << j  << "," << n << endl;
        cout << s1.substr(i, n) << "," << s2.substr(j, n) << endl;

        for (int k = 1; k < n; k++) {
            if ((isScramble(s1, i, s2, j, k) && isScramble(s1, i + k, s2, j + k, n - k))||
                    (isScramble(s1, i, s2, j + n - k, k) && isScramble(s1, i + k, s2, j, n - k))) {
                b[i][j][n] = 1;
                return true;
            }
        }

        b[i][j][n] = 0;
        return false;
    }
    vector<vector<vector<int>>> b;
    public:
    bool isScramble(string s1, string s2) {
        if (s1.size() != s2.size()) return false;
        b.resize(s1.size(), vector<vector<int>>(s1.size(), vector<int>(s1.size() + 1, -1)));
        return isScramble(s1, 0, s2, 0, s1.size());
    }
};

