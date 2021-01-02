//反转一个单链表。 
//
// 示例: 
//
// 输入: 1->2->3->4->5->NULL
//输出: 5->4->3->2->1->NULL 
//
// 进阶: 
//你可以迭代或递归地反转链表。你能否用两种方法解决这道题？ 
// Related Topics 链表 
// 👍 1403 👎 0


//leetcode submit region begin(Prohibit modification and deletion)
//*

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(nullptr) {}
 };
// */
class Solution {
public:
    ListNode * root;
    ListNode* reverseList(ListNode* head) {
        if(head== nullptr){
            return head;
        }
        helper(head);
    }
    ListNode*  helper(ListNode*head){
        if(head->next== nullptr) {
            root=head;
            return head;
        }
        auto pre = helper(head->next);
        pre->next=head;
        head->next= nullptr;
        return head;
    }

};
//leetcode submit region end(Prohibit modification and deletion)
