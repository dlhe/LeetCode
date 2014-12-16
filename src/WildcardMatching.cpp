#include <vector>
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class Solution {
    public:
    bool isMatch(const char *s, const char *p) {
        const char* ps = NULL;
        const char* pss = s;
        while (*s) {
            if (*p == '?' || *p == *s) {
                p++;
                s++;
                continue;
            }

            if (*p == '*') {
                ps = p++;
                pss = s + 1;
                continue;
            }

            if (ps) {
                p = ps;
                s = pss;
                continue;
            }

            return false;
        }

        while (*p == '*') p++;

        return !*p;
    }
};

