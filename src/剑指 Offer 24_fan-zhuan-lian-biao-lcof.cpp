//定义一个函数，输入一个链表的头节点，反转该链表并输出反转后链表的头节点。 
//
// 
//
// 示例: 
//
// 输入: 1->2->3->4->5->NULL
//输出: 5->4->3->2->1->NULL 
//
// 
//
// 限制： 
//
// 0 <= 节点个数 <= 5000 
//
// 
//
// 注意：本题与主站 206 题相同：https://leetcode-cn.com/problems/reverse-linked-list/ 
// Related Topics 链表 /
// 👍 146 👎 0

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};
//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.

 */
class Solution {
public:
    ListNode * rst;
    ListNode* reverseList(ListNode* head) {
        if(head== nullptr)return head;
        helper(head);
        return rst;
    }
    ListNode *helper(ListNode*head){
        if (head->next== nullptr){
            this->rst=head;
            return head;
        }
        auto nxt = head->next;
        head->next = nullptr;
        auto pre = helper(nxt);
        pre->next=head;
        return  head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
