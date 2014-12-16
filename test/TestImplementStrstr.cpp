#include <string>
#include <iostream>
#include "../src/ImplementStrstr.cpp"

using namespace std;
int main() {
    char str[] = "babbbbabaabbababaaaaaabaaaaabbbabbbaabaabbbbbbabbabaaaaaaaabbabbbabbbbaabbbabbbabaabaabababaaabbababaabbaabbbabaaabaaaababa";
    char p[] = "bbbbaaababaabab";
    string ss = "1234";
    cout << ss << endl;
    cout << ss[0] << endl;
    Solution s;
    cout << s.strStr(str, p) << endl;
    cout << (strstr(str, p) == NULL) << endl;
    
    return 0;
}

