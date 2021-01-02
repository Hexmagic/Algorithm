/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */
#include <vector>

using namespace std;
// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int maxIndex = m+n-1;
        int i = m-1;
        int j = n-1;
        while (j>=0){
            if(i>=0&&nums2[j]<nums1[i]){
                nums1[maxIndex--]=nums1[i--];
            }else{
                nums1[maxIndex--]=nums2[j--];
            }
        }
    }
};
// @lc code=end

