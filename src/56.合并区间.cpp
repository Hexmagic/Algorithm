/*
 * @lc app=leetcode.cn id=56 lang=cpp
 *
 * [56] 合并区间
 */
#include <vector>
#include <algorithm>
using namespace std;
// @lc code=start
class Solution {
public:
    static bool  cmp(vector<int>&a ,vector<int> &b){
        return a[0]<b[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        /*
        empty pass
        one elem pass
        [[1,4],[4,5]] pass
        [[1,2],[4,5]] pass
        */
        sort(intervals.begin(),intervals.end(),cmp);
        vector<vector<int>> rst;
        if(intervals.size()==0)return rst;
        auto last = intervals[0];
        for(int i=1;i<intervals.size();i++){
            auto cur = intervals[i];
            if (cur[0]>last[1]){
                rst.push_back(last);
                last=cur;
            }else{
                last[1]=max(last[1],cur[1]);
            }
        }
        rst.push_back(last);
        return rst;
    }
};
// @lc code=end

