#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
    string plus(string num1, string num2) {
        cout << num1 << "," << num2 << endl;
        int r = 0;
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        string ans = "";
        while(i >= 0 || j >= 0 || r > 0) {
            i >= 0 ? r += (num1[i--] - '0') : 0;
            j >= 0 ? r += (num2[j--] - '0') : 0;
            ans = (char)((r % 10) + '0') + ans;
            r /= 10;
        }
        cout << ans << endl;
        return ans;
    }
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        string ans = "0";
        for (int i = num2.length() - 1; i >= 0; i--) {
            int r = 0;
            if (num2[i] == '0') continue;
            string d = "";
            for (int j = num1.length() - 1; j >= 0 || r > 0; j--) {
                j >= 0 ? r += (num1[j] - '0') * (num2[i] - '0') : 0;
                d = char((r % 10) + '0') + d;
                r /= 10;
            }

            d += string(num2.length() - i - 1, '0');
            ans = plus(ans, d);
            
        }
        
        return ans;
    }
};

