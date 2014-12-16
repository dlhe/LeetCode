#include <iostream>
#include "../src/Sudoku.cpp"

using namespace std;

int main()
{
    vector<string> lb {"..9748...","7........",".2.1.9...","..7...24.",".64.1.59.",".98...3..","...8.3.2.","........6","...2759.."};

    vector<vector<char>> lboard(lb.size());
   for (size_t i = 0; i < lb.size(); i++)
      for (size_t j = 0; j < lb[i].size(); j++)
            lboard[i].push_back(lb[i][j]);
    Solution s;
    s.solveSudoku(lboard);
    return 0;
}

