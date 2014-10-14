#include <iostream>
#include <cassert>
#include "../src/MaxProduct.cpp"

using namespace std;

int main()
{
    Solution s;
    int a[] = {2, 3, -2, 4};
    int n = 4;
    assert(s.maxProduct(a, n) == 6);
    return 0;
}


