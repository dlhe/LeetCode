/**
Problem: Media of Two Sorted Arrays

There are two sorted arrays A and B of size m and n respectively. Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).

@Author: L
@Date: 2014/10/09
*/

#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
    public:
        double findMedianSortedArrays(int A[], int m, int B[], int n) {
            int lhn = ceil((m + n) / 2.0);
            int l = max(1, lhn - n);
            int r = min(m, lhn);

            int* pa = A;
            int* pb = B;

            while(true)
            {
                if (l > r)
                {
                    l = max(1, lhn - m);
                    r = min(n, lhn);
                    swap(pa, pb);
                    swap(n, m);
                    continue;
                }

                int i = floor((l + r) / 2.0);
                int j = lhn - i;

                if ((j == 0 || pa[i - 1] >= pb[j - 1]) && (j == n || pa[i - 1] <= pb[j])) {
                    if ((m + n) % 2 != 0)
                        return pa[i - 1];
                    else
                    {
                        if ((j == n) || (j < n && i < m && pa[i] < pb[j]))
                        {
                            return (pa[i - 1] + pa[i]) / 2.0;
                        }
                        else
                        {
                            return (pa[i - 1] + pb[j]) / 2.0;
                        }

                    }
                }
                else if ((j == 0 || pa[i - 1] > pb[j - 1]) && (j != n && pa[i - 1] > pb[j])) {
                    r = i - 1;
                }
                else 
                    l = i + 1;
            }
        }
};

