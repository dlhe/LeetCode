#include <iostream>
#include <vector>
#include <string>
#include "../src/ScrambleString.cpp"

int main() {
    string S = "great";
    string T = "rgtae";
    Solution s;
    cout << s.isScramble(S, T) << endl;
    return 0;
}
