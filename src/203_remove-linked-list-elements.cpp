//删除链表中等于给定值 val 的所有节点。 
//
// 示例: 
//
// 输入: 1->2->6->3->4->5->6, val = 6
//输出: 1->2->3->4->5
// 
// Related Topics 链表 
// 👍 502 👎 0

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
    ListNode* removeElements(ListNode* head, int val) {
        while (head!= nullptr&&head->val==val){
            head=head->next;
        }
        if(head== nullptr){
            return head;
        }
        auto root =head;
        while (head->next!= nullptr){
            if(head->next->val==val){
                head->next=head->next->next;
            } else{
                head=head->next;
            }
        }
        return root;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
