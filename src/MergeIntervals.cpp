/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
#include <vector>
#include <algorithm>
using namespace std;
struct Interval {
     int start;
     int end;
     Interval() : start(0), end(0) {}
     Interval(int s, int e) : start(s), end(e) {}
 };


class Solution {
    public:
        bool static cmp_less(const Interval& l, const Interval& r) {
            return l.start < r.start ? true : (l.start == r.start) ? l.end < r.end : false;
        }

        vector<Interval> merge(vector<Interval> &intervals) {
            sort(intervals.begin(), intervals.end(), Solution::cmp_less);
            vector<Interval> ans;
            if (intervals.size() == 0) return ans;
            Interval cur = intervals[0];
            for (size_t i = 1; i < intervals.size(); i++) {
                if (intervals[i].start <= cur.end) {
                    cur.end = max(intervals[i].end, cur.end);
                }
                else {
                    ans.push_back(cur);
                    cur = intervals[i];
                }
            }
            ans.push_back(cur);
            return ans;
        }
};

