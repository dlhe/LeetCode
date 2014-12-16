#include <iostream>
#include <vector>
#include <string>
#include "../src/EditDistance.cpp"

using namespace std;

int main() { 
    string word1 = "pneumonoultramicroscopicsilicovolcanoconiosis";
    string word2 = "ultramicroscopically"; 
    Solution s;
    cout << s.minDistance(word1, word2) << endl;
    return 0;
}

