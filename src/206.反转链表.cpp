/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
    ListNode* reverseList(ListNode* head) {
        ListNode *cur=head;
        ListNode *pre=nullptr;
        while (cur!=nullptr)
        {
            auto nxt = cur->next;
            cur->next=pre;
            pre=cur;
            cur=nxt;
        }
        return pre;
    }
};
// @lc code=end

