/**
Problem:
Given an array of integers, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2 

@Author: L
@Date 2014/10/09

*/

#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        map<int, size_t> lValueToIndexMap;
        vector<int> lIndex{0, 0};

        for(size_t i = 0; i < numbers.size(); i++)
        {
            int lLeft = target - numbers[i];
            if (lValueToIndexMap.find(lLeft) != lValueToIndexMap.end())
            {
                lIndex[0] = lValueToIndexMap[lLeft] + 1;
                lIndex[1] = i + 1;
                return lIndex;
            }

            lValueToIndexMap[numbers[i]] = i;
        }

        return lIndex;
    }
};

