//给定一个非负整数 numRows，生成杨辉三角的前 numRows 行。 
//
// 
//
// 在杨辉三角中，每个数是它左上方和右上方的数的和。 
//
// 示例: 
//
// 输入: 5
//输出:
//[
//     [1],
//    [1,1],
//   [1,2,1],
//  [1,3,3,1],
// [1,4,6,4,1]
//] 
// Related Topics 数组 
// 👍 430 👎 0

#include <vector>
using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        if(numRows<=0) {
            return {};
        }else if(numRows==1){
            vector<vector<int>> v= {{1}};
            return v;
        }else if(numRows==2){
            vector<vector<int>> v = {
                    {1},
                    {1,1}
            };
            return v;
        }else{
            auto lastNum = numRows-1;
            auto vec=generate(lastNum);
            auto lastRow= vec[vec.size()-1];
            vector<int> curRow(numRows,1);
            for(int i=1;i<numRows-1;i++){
                curRow[i]=lastRow[i-1]+lastRow[i];
            }
            vec.push_back(curRow);
            return vec;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)
