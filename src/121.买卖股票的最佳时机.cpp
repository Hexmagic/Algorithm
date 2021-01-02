/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */
#include <vector>
#include <math.h>
using namespace std;

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int length = prices.size();
        vector<int> tmp(length,0);
        for(int i=1;i<length;i++){
            tmp[i]=prices[i]-prices[i-1];
        }
        int val=0;
        for(int j=1;j<tmp.size();j++){
            tmp[j]=max(tmp[j],tmp[j]+tmp[j-1]);
            val = max(tmp[j],val);

        }
        return val;

    }
};
// @lc code=end

