#include <iostream>
#include <cassert>
#include "../src/LargestRectangleArea.cpp"

using namespace std;

int main()
{
    vector<int> lInput {1, 2, 3};
    Solution s;
    assert(s.largestRectangleArea(lInput) == 4);
    return 0; 
}

