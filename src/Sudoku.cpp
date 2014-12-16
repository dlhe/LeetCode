#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <iostream>

using namespace std;

class Solution {
    bool sudoku(vector<vector<char> >& board, int n) {
        if (n == board.size() * board.size()) return true;
        int i = n / board.size();
        int j = n % board.size(); 
        if (board[i][j] != '.') sudoku(board, n + 1);

        unordered_set<char> lans {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

        int ti = (i / 3) * 3;
        int tj = (j / 3) * 3;


        for (size_t c = 0; c < board.size(); c++) {
            lans.erase(board[i][c]);
            lans.erase(board[c][j]);
            lans.erase(board[ti + c / 3][tj + c / 3]);
        }

        if (lans.empty()) return false;
        else{
            for (auto it = lans.begin(); it != lans.end(); it++){
                board[i][j] = *it;
                if (sudoku(board, n + 1)) return true;
                board[i][j] = '.';
            }
        }

        return false;
    }

    public:
    void solveSudoku(vector<vector<char> > &board) {

        sudoku(board, 0);
        for (size_t i = 0; i < board.size(); i++) {
            for (size_t j = 0; j < board[i].size(); j++) {
                cout << board[i][j];
            }
            cout << endl;
        }

    }
};

