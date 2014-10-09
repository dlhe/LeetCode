#include <cassert>
#include <iostream>
#include "../src/FindMedianSortedArrays.cpp"

using namespace std;

int main() {
    int lA[] = {2, 5, 8};
    int lB[] = {3, 9};
    int lNA = 3;
    int lNB = 2;
    Solution s;
    assert(s.findMedianSortedArrays(lA, lNA, lB, lNB) == 5);
    return 0;
}
