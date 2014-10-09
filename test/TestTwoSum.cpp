#include <iostream>
#include <vector>
#include <cassert>
#include "../src/TwoSum.cpp"

using namespace std;

int main() {
    vector<int> lCase1 {2, 7, 11, 15};
    int ltarget1 = 9;
    Solution s;
    vector<int> lAns1 = s.twoSum(lCase1, ltarget1);
    assert(lAns1[0] == 1 && lAns1[1] == 2);
    return 0;
}

