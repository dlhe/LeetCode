#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int> &height) {
        stack<int> s;
        int i = 0;
        height.push_back(0);
        int n = height.size();
        int lMaxArea = 0;
        while (i < n)
        {
            if (s.empty() || height[s.top()] <= height[i])
                s.push(i++);
            else
            {
                int tp = s.top();
                s.pop();
                int lCurArea = height[tp] * (s.empty()? i : i - s.top() - 1);
                if (lMaxArea < lCurArea)
                    lMaxArea = lCurArea;
            }
        }

        height.erase(height.begin() + n - 1);

        return lMaxArea;
    }
};
