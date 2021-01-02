/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    void cycle(vector<vector<int>>&matrix,int tx,int ty,int bx,int by,vector<int> &rst){
        if(tx==bx){
            while(ty<=by){
                rst.push_back(matrix[tx][ty++]);
            }
        }else if(ty==by){
            while(tx<=bx){
                rst.push_back(matrix[tx++][ty]);
            }
        }else
        {
            int cur_x = tx;
            int cur_y = ty;
            while(cur_y<=by){

                rst.push_back(matrix[cur_x][cur_y++]);
            }
            while(cur_x<bx){
                rst.push_back(matrix[++cur_x][by]);
            }
            while(by>ty){
                rst.push_back(matrix[bx][--by]);
            }
            bx = bx-1;
            while(bx>tx){
                rst.push_back(matrix[bx--][ty]);
            }
        }
        
    }

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> rst;
        if(matrix.size()==0) 
            return rst;
        int top_x=0,top_y=0;
        int bottom_x=matrix.size()-1;
        int bottom_y=matrix[0].size()-1;
        while(top_x<=bottom_x&&top_y<=bottom_y){
            cycle(matrix,top_x++,top_y++,bottom_x--,bottom_y--,rst);
        }
        return rst;
    }
};
// @lc code=end

