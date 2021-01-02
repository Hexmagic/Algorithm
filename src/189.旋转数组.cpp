/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 旋转数组
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==0) return;
        k = k%nums.size();
        int tmp;
        int maxIndex=nums.size()-1;
        while (k>0)
        {   
            tmp = nums[maxIndex];
            nums.pop_back();
            nums.insert(nums.begin(),1,tmp);
            k--;

        }
        
    }
};
// @lc code=end

