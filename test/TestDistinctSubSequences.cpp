#include <iostream>
#include <string>
#include <vector>
#include "../src/DistinctSubSequences.cpp"

using namespace std;

int main() { 
    string S = "ccc";
    string T = "ca";
    Solution s;
    cout << s.numDistinct(S, T) << endl;
    return 0;
}
