#include <vector>
#include <string>
#include <iostream>
#include "../src/MinimumWindowSubstring.cpp"

using namespace std;

int main() {

    string S = "baabcc";
    string T = "ccaa";
    Solution s;
    cout << s.minWindow(S, T) << endl;
    return 0;
}
