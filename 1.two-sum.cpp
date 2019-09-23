/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 * 
 * Author:      Roy Hu
 * Date:        2019-09-23
 */

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        int size = nums.size();
        if (size < 2) return ret;

        unordered_map<int, int> map;
        for(int i = 0, m = 0; i < size; ++i)
        {
            m = nums[i];

            if (i > 0 && map.find(m) != map.end())
            {
                ret.push_back(map.at(m));
                ret.push_back(i);
                return ret;
            }
            else
            {
                map.insert(make_pair(target - m, i));
            }
        }

        return ret;
    }
};

