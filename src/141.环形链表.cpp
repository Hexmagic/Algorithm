/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
 */
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
 };
// @lc code=start
/**
 * Definition for singly-linked list.
 
 */

class Solution {
public:
    bool hasCycle(ListNode *head) {
        auto fast = head;
        bool notInit=false;
        while(head!=nullptr&&fast!=nullptr){
            if(head==fast&&notInit){
                return true;
            }
            notInit=true;
            head=head->next;
            if(fast->next!=nullptr){
                fast = fast->next->next;
            }else{
                break;
            }
        }   
        return false;     
    }
};
// @lc code=end

