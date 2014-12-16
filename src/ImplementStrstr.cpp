#include <string>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;

class Solution {

public:
    int strStr(char *haystack, char *needle) {
        int m = strlen(needle);
        int n = strlen(haystack);
        vector<int> next(m, -1);
        int j = 0;
        int k = -1;
        while (j < m - 1) {
            if (k == -1 || needle[k] == needle[j]) {
                next[++j] = ++k;
            } else {
                k = next[k];
            }
        }
        
        int i = 0;
        j = 0;
        while (i < n && j < m) {
            if (j == -1 || haystack[i] == needle[j]) {
                i++;
                j++;
            } else {
                j = next[j];
            }
        }

        if (j == m)
            return i - j;
        else       
            return -1;
    }
};
