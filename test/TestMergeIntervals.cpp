#include <iostream>
#include <vector>
#include "../src/InsertInterval.cpp"

int main() {
    vector<int> s {1, 3, 6, 8, 12};
    vector<int> e {2, 5, 7, 10, 16};
    vector<Interval> v;
    for (int i = 0; i < s.size(); i++)
        v.insert(Interval(s[i], e[i]));
    Solution ss;
    vector<Interval> a = ss.insert(v, Interval(4, 9));
    for (int i = 0; i < a.size(); i++)
        cout << a[i].start << ", " << a[i].end << endl;
    
    return 0;
}

