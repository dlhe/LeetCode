/**
 *
 * Find the contiguous subarray within an array (containing at least one number) which has the largest product.
 * For example, given the array [2,3,-2,4],
 *  the contiguous subarray [2,3] has the largest product = 6.
 *
 * */
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProduct(int A[], int n) {
        if (n == 1) return A[0];
        int min_a = A[0];
        int max_a = A[0];
        int ans = A[0];
        for (int i = 1; i < n; i++)
        {
            int t = max(max(A[i], min_a * A[i]), max_a * A[i]);
            min_a = min(min(A[i], min_a * A[i]), max_a * A[i]);
            max_a = t;
            if (max_a > ans) ans = max_a;
        }
        
        return ans;
    }
};

