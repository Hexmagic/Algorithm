/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */
#include <string>
#include <algorithm>
using namespace std;
// @lc code=start
class Solution {
public:
    int myAtoi(string s) {
        s.erase(0,s.find_first_not_of(' '));
        bool neg=false;
        if(s[0]=='-') neg=true;
        long num=0;
        long mx = 2147483648;
        for(int i =0;i<s.size();i++){
            auto e = s[i];
            if(e=='+' or e=='-'){
                if(i!=0) break;
            }else if(isdigit(e)){
                num =num*10+e-'0';
                num = min(num,mx);
            }else{
                break;
            }
        }
        return neg?min(num,long(INT_MIN)):max(num,long(INT_MAX));
        
    }
};
// @lc code=end

