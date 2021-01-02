//给定一个非负索引 k，其中 k ≤ 33，返回杨辉三角的第 k 行。 
//
// 
//
// 在杨辉三角中，每个数是它左上方和右上方的数的和。 
//
// 示例: 
//
// 输入: 3
//输出: [1,3,3,1]
// 
//
// 进阶： 
//
// 你可以优化你的算法到 O(k) 空间复杂度吗？ 
// Related Topics 数组 
// 👍 209 👎 0

#include <vector>
using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex<=1){
            return vector<int>(rowIndex+1,1);
        }else{
            vector<int> lastRow = {1,1};
            for(int i=2;i<=rowIndex;i++){
                vector<int> curRow(i+1,1);
                for(int j=1;j<i;j++){
                    curRow[j]=lastRow[j-1]+lastRow[j];
                }
                lastRow=curRow;
            }
            return lastRow;
        };
    }
};
//leetcode submit region end(Prohibit modification and deletion)
