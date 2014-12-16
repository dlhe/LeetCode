#include <vector>
#include <string>
#include <iostream>
#include <unordered_map>
#include <unordered_set>

using namespace std;


class Solution {
public:
    vector<int> findSubstring(string S, vector<string> &L) {
        
        unordered_map<string, int> dict;
        unordered_map<int, int> cd;
        for (int i = 0; i < L.size(); i++) {
            if (dict.find(L[i]) == dict.end())
                dict[L[i]] = i;
            cd[dict[L[i]]]++;
        }

        int ds = L[0].size();

        
        vector<int> ans;
        int nd = ds * L.size();
        if (nd > S.size()) return ans;
        cout << nd << endl;
        
        vector<int> ind(S.size(), -1);
        cout << S.size() << endl;
        cout << ds << endl;
        int n = S.size() - ds + 1;
        cout << n << endl;
        for (int i = 0; i < n; i++) {
            string s = S.substr(i, ds);
            auto it = dict.find(s);
            if (it != dict.end()) {
                ind[i] = it->second;
            }
            cout << ind[i] << ",";
            cout << s << endl;
        }
        cout << endl;
        
        for (int i = 0; i < ind.size(); i++) {
            int j = i;
            unordered_map<int, int> v;
            int k = 0;
            while (j < ind.size() && k < L.size() && ind[j] >= 0 && v[ind[j]] < cd[ind[j]]) {
                k++;
                v[ind[j]]++;
                cout << j << ",";
                j += ds;
            }
            cout << endl;
            if (k == L.size()) ans.push_back(i);
        }
        
        return ans;
        
    }
};
