/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

#include<set>
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> seen;
        for(auto elem:nums){
            if(seen.find(elem)!=seen.end()){
                return true;
            }
            seen.insert(elem);
        }
        return false;
    }
};
// @lc code=end

