//给定一个链表，删除链表的倒数第 n 个节点，并且返回链表的头结点。 
//
// 示例： 
//
// 给定一个链表: 1->2->3->4->5, 和 n = 2.
//
//当删除了倒数第二个节点后，链表变为 1->2->3->5.
// 
//
// 说明： 
//
// 给定的 n 保证是有效的。 
//
// 进阶： 
//
// 你能尝试使用一趟扫描实现吗？ 
// Related Topics 链表 双指针 
// 👍 1151 👎 0

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 *
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        auto cur = head;
        if (head==nullptr || n<0){
            return head;
        }
        while (cur!= nullptr){
            n--;
            cur=cur->next;
        }
        if(n>0){
            return head;
        }else if(n==0){
            head=head->next;
        }else {
            cur = head;

            while (++n!= 0) {
                cur = cur->next;
            }
            cur->next = cur->next->next;

        }
        return head;

    }
};
//leetcode submit region end(Prohibit modification and deletion)
