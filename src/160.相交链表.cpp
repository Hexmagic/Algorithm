/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */
#include <queue>
using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
// @lc code=start
/**
 * Definition for singly-linked list.
 *
 */

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        queue<ListNode*> sa;
        while (headA!=nullptr)
        {
            sa.push(headA);
            headA=headA->next;
        }
        queue<ListNode*>sb;
        while(headB!=nullptr){
            sb.push(headB);
            headB=headB->next;
        }
        while(true){
            if(sa.size()>sb.size()){
                sa.pop();
            }else if(sa.size()<sb.size()){
                sb.pop();
            }else{
                while (!sa.empty()){
                    auto a = sa.front();
                    auto b = sb.front();
                    if(a==b){
                        return a;
                    }
                    sa.pop();
                    sb.pop();
                }
                if(sa.empty()){
                    return nullptr;
                }else{
                    return sa.front();
                }
                
            }
        }
        return nullptr;
    }
};
// @lc code=end

