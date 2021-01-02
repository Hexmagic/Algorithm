//给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。 
//
// 示例 1: 
//
// 输入: 123
//输出: 321
// 
//
// 示例 2: 
//
// 输入: -123
//输出: -321
// 
//
// 示例 3: 
//
// 输入: 120
//输出: 21
// 
//
// 注意: 
//
// 假设我们的环境只能存储得下 32 位的有符号整数，则其数值范围为 [−231, 231 − 1]。请根据这个假设，如果反转后整数溢出那么就返回 0。 
// Related Topics 数学 
// 👍 2408 👎 0

//#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int reverse(int x) {
        bool neg = x<0;
        auto abx = abs(x);
        vector<int>arr;
        //INT32_MAX;
        while (abx>=10){
            auto md =abx%10;
            arr.push_back(md);
            abx/=10;
        }
        arr.push_back(abx);
        //std::reverse(arr.begin(),arr.end());
        long tmp=0;
        for(auto e:arr){
            tmp*=10;
            tmp+=e;
        }
        if (tmp>=INT32_MAX or tmp<=INT32_MIN){
            return 0;
        }
        return  neg?(0-tmp):tmp;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
