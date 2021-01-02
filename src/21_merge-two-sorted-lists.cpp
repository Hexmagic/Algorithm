//将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
//
// 
//
// 示例： 
//
// 输入：1->2->4, 1->3->4
//输出：1->1->2->3->4->4
// 
// Related Topics 链表 
// 👍 1446 👎 0
#include <iostream>
using namespace std;
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

 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1== nullptr)return l2;
        if(l2== nullptr)return l1;
        ListNode *l3= nullptr;
        ListNode *head= nullptr;
        int val;
        while (l1!= nullptr && l2!= nullptr){
            if(l1->val<l2->val){
                val = l1->val;
                l1=l1->next;
            }else{
                val = l2->val;
                l2=l2->next;
            }
            //cout<<val<<endl;
            auto node = new ListNode();
            node->val=val;
            node->next= nullptr;
            if(l3== nullptr){
                l3=node;
                head=node;
            }else{
                l3->next=node;
                l3=l3->next;
            }
        }
        if(l1!= nullptr)l3->next=l1;
        if(l2!= nullptr)l3->next=l2;
        return head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
int main(){
    Solution s;
    auto node= new ListNode{1};
    auto node1 = new ListNode{2};
    auto node3 = new ListNode{4};
    auto n1 = new ListNode{1};
    auto n2=new ListNode{3};
    auto n3=new ListNode{4};
    auto h1 = node;
    h1->next=node1;
    h1->next->next=node3;
    auto h2 = n1;
    h2->next=n2;
    h2->next->next=n3;
    s.mergeTwoLists(h1,h2);
}