#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<int> d(word2.size() + 1, 0);

        for (int i = 1; i < d.size(); i++) {
            d[i] = i;
        }

        for (int i = 1; i <= word1.size(); i++) {
            int prev = i;
            for (int j = 1; j <= word2.size(); j++) {
                int cur = d[j - 1];
                if (word1[i - 1] != word2[j - 1]) {
                    cur = min(prev, min(d[j - 1], d[j])) + 1;
                }
                d[j - 1] = prev;
                prev = cur;
            }
            d.back() = prev;
        }
        return d.back();
    }
};

