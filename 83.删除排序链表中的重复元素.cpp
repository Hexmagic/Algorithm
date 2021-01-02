/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        auto pre = head;
        auto cur =head->next;
        while (cur!=nullptr)
        {
            if(cur->val!=pre->val){
                pre = pre->next;
                pre->val = cur->val;
            }
            cur=cur->next;
        }
        pre->next = nullptr;
        return head;
    }
};
// @lc code=end

