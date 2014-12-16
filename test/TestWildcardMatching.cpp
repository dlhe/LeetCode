#include <iostream>
#include <vector>
#include <string>
#include "../src/WildcardMatching.cpp"

using namespace std;

int main()
{
    char str[] = "acccacbabbba";
    char p[] = "a*a?ba*ba";
    
    Solution s;
    cout << s.isMatch(str, p) << endl;
    return 0;
}

