/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        for(auto elem : nums1){
            s1.insert(elem);
        }
        set<int> s2;
        for(auto elem: nums2){
            s2.insert(elem);
        }
        vector<int> target;
        set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(target,begin(target)));
        return target;
    }
};
// @lc code=end

