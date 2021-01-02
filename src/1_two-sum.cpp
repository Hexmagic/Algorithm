//给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。 
//
// 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。 
//
// 
//
// 示例: 
//
// 给定 nums = [2, 7, 11, 15], target = 9
//
//因为 nums[0] + nums[1] = 2 + 7 = 9
//所以返回 [0, 1]
// 
// Related Topics 数组 哈希表 
// 👍 9859 👎 0

#include <vector>
#include <map>
using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,vector<int>> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        for(auto e:mp){
            auto left = target-e.first;
            if(left==e.first){
                if(mp[left].size()==2){
                    return mp[left];
                }
            }else{
                if(mp.find(left)!=mp.end()){
                    return {e.second.front(),mp[left].front()};
                }
            }
        }
        return {};
    }
};
//leetcode submit region end(Prohibit modification and deletion)
