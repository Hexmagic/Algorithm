/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

#include <map>
#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
    map<char,int> getRec(string s){
        map<char,int> rec;
        for(auto e:s){
            rec[e]+=1;
        }
        return rec;
    }
    bool isAnagram(string s, string t) {
        auto rec_s = getRec(s);
        auto rec_t = getRec(t);
        if (rec_s.size()!=rec_t.size()) return false;
        for(auto e: rec_s){
            if(rec_t.find(e.first)==rec_t.end()){
                return false;
            }
            if(rec_t[e.first]!=e.second){
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

