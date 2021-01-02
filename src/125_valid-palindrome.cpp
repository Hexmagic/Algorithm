//给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。 
//
// 说明：本题中，我们将空字符串定义为有效的回文串。 
//
// 示例 1: 
//
// 输入: "A man, a plan, a canal: Panama"
//输出: true
// 
//
// 示例 2: 
//
// 输入: "race a car"
//输出: false
// 
// Related Topics 双指针 字符串 
// 👍 304 👎 0

#include "string"
#include <iostream>
#include <algorithm>
using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        transform(s.begin(),s.end(),s.begin(),[](unsigned char c){ return tolower(c); });
        while (i<j){
            if(!isalnum(s[i])){
                i++;
            }else if(!isalnum(s[j])){
                j--;
            }else{
                if(s[i]!=s[j]){
                    return false;
                }else{
                    i++;
                    j--;
                }
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
