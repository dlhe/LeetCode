#include <iostream>
#include <vector>
#include <string>
#include "../src/TextJustification.cpp"

using namespace std;

int main() { 
    vector<string> words {"This", "is", "an", "example", "of", "text", "justifi", "ca."};
    int l = 16;
    Solution s;
    vector<string> ans = s.fullJustify(words, l);
    return 0;
}

