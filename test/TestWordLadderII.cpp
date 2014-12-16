#include <iostream>

#include "../src/WordLadderII.cpp"
using namespace std;

int main()
{
    unordered_set<string> ldict {"hot", "dot", "dog", "lot", "log"};
    string start = "hit";
    string end = "cog";

    Solution s;
    vector<vector<string>> ans = s.findLadders(start, end, ldict);
    for (size_t i = 0; i < ans.size(); i++){
        for (size_t j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << ",";
        cout << endl;
    }
    return 0;
}

