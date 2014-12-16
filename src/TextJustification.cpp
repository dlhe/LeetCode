#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<string> fullJustify(vector<string> &words, int L) {
        int i = 0;
        vector<string> ans;
        while (i < words.size()) {
            int j = i;
            int l = 0;
            while (j < words.size()) {
                int nl = l > 0 ? words[j].length() + 1 : words[j].length();
                if (l + nl <= L) l += nl;
                else break;
                j++;
            }
            
            int k = j - i - 1;
            int ne = (j == words.size() || k == 0) ? 0 : (L - l) % k;
            int nr = (j == words.size() || k == 0) ? 0 : (L - l) / k;
            cout << L - l << "," << k << ", " << ne << "," << nr << endl;
            string st = "";
            for (int t = i; t < j; t++) {
                int ns = nr + 1 + (ne > 0);
                if (t == i) ns = 0;
                if (ns > 0) {
                    st += string(ns, ' ');
                }
                st += words[t];
                if (t > i)
                    ne--;
            }
            
            if (st.length() < L) st += string(L - st.length(), ' ');
            cout << st << "$" << endl;

            i = j;
            ans.push_back(st);
        }

        return ans;
    }
};
