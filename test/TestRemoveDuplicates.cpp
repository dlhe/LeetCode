#include <cassert>

#include "../src/RemoveDuplicates.cpp"

int main()
{
    int lA[] = {1, 1, 2};
    int n = sizeof(lA) / sizeof(lA[0]);
    Solution s;
    assert(s.removeDuplicates(lA, n) == 2);
    assert(lA[1] == 2);
    return 0;
}

