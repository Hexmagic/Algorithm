/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int maxIndex = digits.size()-1;
        bool flag=true;
        int tmp=0;
        
        for(int j = maxIndex;j>=0;j--){
            tmp=digits[j]+flag;
            flag = tmp>=10;
            digits[j]=tmp%10;
            if(!flag){
                break;
            }
        }
        if(flag){
            digits.insert(digits.begin(),1,1);
        }
        return digits;
    }
};
// @lc code=end

