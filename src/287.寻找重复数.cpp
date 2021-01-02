/*
 * @lc app=leetcode.cn id=287 lang=cpp
 *
 * [287] 寻找重复数
 */
#include <set>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int findDuplicate(vector<int>& nums) {  
        set<int> ret;
        
        for(int i=0;i<nums.size();i++){
            if(ret.find(nums[i])==ret.end()){
                ret.insert(nums[i]);
            }else{
                return nums[i];
            }
        }
        return 0;
        
    }
};
// @lc code=end

