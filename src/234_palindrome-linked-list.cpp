//请判断一个链表是否为回文链表。 
//
// 示例 1: 
//
// 输入: 1->2
//输出: false 
//
// 示例 2: 
//
// 输入: 1->2->2->1
//输出: true
// 
//
// 进阶： 
//你能否用 O(n) 时间复杂度和 O(1) 空间复杂度解决此题？ 
// Related Topics 链表 双指针 
// 👍 798 👎 0
#include <deque>
using namespace std;
struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
};
//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 *
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        deque<int> que;
        while(head!= nullptr){
            que.push_back(head->val);
            head=head->next;
        }
        while (que.size()>1){
            if (que.front()!=que.back()){
                return false;
            }else{
                que.pop_back();
                que.pop_front();
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
