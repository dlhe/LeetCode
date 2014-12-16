#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int numDistinct(string S, string T) {
       if (T.size() > S.size()) return 0;

       vector<int> np(T.size() + 1, 0);
       np[0] = 1;

       for (int i = 1; i <= S.size(); i++) {
           for (int j = T.size(); j > 0; j--) {
               np[j] += (T[j - 1] == S[i - 1] ? np[j - 1] : 0);
           }
       } 
       return np.back();
    }
};
