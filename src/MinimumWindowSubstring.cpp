#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string minWindow(string S, string T) {
        vector<int> c(256, 0);
        int cn = 0;
        for (int i = 0; i < T.size(); i++) {
            c[T[i]]++;
            cn++;
        }
            
        int minW = S.size() + 1;
        int i = 0;
        int j = 0;
        int minI = -1;
        vector<int> t(256, 0);
        int ccn = 0;
        while(j < S.size())
        {
            while (j < S.size() && ccn < cn) {
                t[S[j]]++;
                if (t[S[j]] <= c[S[j]] && c[S[j]] > 0) ccn++;
                j++;
            }
            
            while (i < j && ccn == cn) {
                if ((j - i) < minW) {
                    minW = j - i;
                    minI = i;
                }

                t[S[i]]--;
                if (c[S[i]] > 0 && t[S[i]] < c[S[i]]) ccn--;
                i++;
            }
        }
        
        //cout << minI << "," << minW << endl;
        if (minI == -1) return "";
        else return S.substr(minI, minW);
    }
};

