/*
 * @lc app=leetcode.cn id=328 lang=cpp
 *
 * [328] 奇偶链表
 */
//**
  //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
// */
// @lc code=start

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
         if(head==nullptr|| head->next==nullptr){
             return head;
         }
         auto nxt = head->next;
         auto cur = head;
         auto second = nxt;
         bool i1 = true;
         bool i2 = true;
         ListNode * tmp;
         while (i1||i2)
         {  
             if(i1){
                if(cur==nullptr||cur->next==nullptr){
                    i1=false;
                }else{
                    tmp = cur->next->next;
                    if(tmp!=nullptr){
                        cur->next = tmp;
                        cur = tmp;
                    }else{
                        i1=false;
                    }
                    
                }
             }
             if(i2){                 
                if(nxt==nullptr||nxt->next==nullptr){
                    i2=false;
                }else{
                    nxt->next = nxt->next->next;
                    nxt = nxt->next;
                }
             }
         }
         cur->next = second;
         return head;
    }
};
// @lc code=end

int main(){
    auto l = new ListNode(1);
    auto s = new ListNode(2);
    auto d = new ListNode(3);
    auto e = new ListNode(4);
    l->next=s;
    s->next=d;
    d->next=e;
    auto so = new Solution{};
    so->oddEvenList(l);
}