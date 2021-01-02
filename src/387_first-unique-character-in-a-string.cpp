//给定一个字符串，找到它的第一个不重复的字符，并返回它的索引。如果不存在，则返回 -1。 
//
// 
//
// 示例： 
//
// s = "leetcode"
//返回 0
//
//s = "loveleetcode"
//返回 2
// 
//
// 
//
// 提示：你可以假定该字符串只包含小写字母。 
// Related Topics 哈希表 字符串 
// 👍 298 👎 0
#include <map>
#include <vector>
#include <string>

using namespace std;
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int firstUniqChar(string s) {
        map<char,vector<int>>record;
        vector<int> keys;
        for(int i=0;i<s.length();i++){
            if(record.find(s[i])==record.end()){
                keys.push_back(s[i]);
            }
            record[s[i]].push_back(i);
        }
        for(auto e:keys){
            //cout<<e<<endl;
            if (record[e].size()==1){
                return record[e].front();
            }
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
