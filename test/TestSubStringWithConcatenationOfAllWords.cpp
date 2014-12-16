#include <iostream>
#include <vector>
#include <string>
#include "../src/SubStringWithConcatenationOfAllWords.cpp"

using namespace std;

int main() {

    string str = "a";
    vector<string> l {"a"};
    Solution s;
    vector<int> a = s.findSubstring(str, l);
    cout << "======" << endl;
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << ",";
    cout << endl;
    return 0;
}
