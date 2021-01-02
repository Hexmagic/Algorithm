/*
 * @lc app=leetcode.cn id=74 lang=cpp
 *
 * [74] 搜索二维矩阵
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0) return false;
        if(matrix[0].size()==0) return false;
        int maxRow = matrix.size()-1;
        int col = matrix[0].size()-1;
        int row = 0;
        while (col>=0 &&row<=maxRow)
        {
            if(matrix[row][col]==target){
                return true;
            }else if(matrix[row][col]<target){
                row++;
            }else{
                col--;
            }
            
        }
        return false;
        
    }
};
// @lc code=end

