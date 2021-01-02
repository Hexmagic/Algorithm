/*
 * @lc app=leetcode.cn id=82 lang=cpp
 *
 * [82] 删除排序链表中的重复元素 II
 */
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
#include <deque>
using namespace std;
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        deque<ListNode*> que;
        while (head!=nullptr)
        {
            if(que.size()==0){
                que.push_back(head);
            }else{
                if()
            }
            head=head
        }
        
    }
};
// @lc code=end

