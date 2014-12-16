#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Solution {
    void NQueue(int i, vector<string>& a)
    {
        for (int j = 0; j < a.size(); j++)
        {
            int k = i;
            for (;k > 0; k--)
                if (a[k - 1][j] == 'Q' || 
                    ((j >= k) && a[i - k][j - k] == 'Q') ||
                    (j + k < a.size() && a[i- k][j + k] == 'Q'))
                    break;
            if (k == 0)
            {
                a[i][j] = 'Q';
                if (i == a.size() - 1)
                {
                    for (int s = 0; s < a.size(); s++)
                        cout << a[s] << endl;
                    cout << endl;
                    mAns.push_back(a);
                }
                else
                    NQueue(i + 1, a);
                a[i][j] = '.';
            }
        }
    }
    vector<vector<string> > mAns;
public:
    vector<vector<string> > solveNQueens(int n) {
        mAns.clear();
        vector<string> a(n, string(n, '.'));
        NQueue(0, a);
        return mAns;
    }
};
