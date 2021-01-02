#include <iostream>
using namespace std;

/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
        : val(0)
        , next(nullptr)
    {}
    ListNode(int x)
        : val(x)
        , next(nullptr)
    {}
    ListNode(int x, ListNode *next)
        : val(x)
        , next(next)
    {}
};
// @lc code=start
/**
 * Definition for singly-linked list.
 * 
 */

class Solution
{
public:
    void helper(ListNode *cur, ListNode *l, bool flag)
    {
        int tmp;
        while (l != nullptr) {
            tmp = l->val + flag;
            flag = tmp >= 10;
            tmp = tmp % 10;
            auto node = new ListNode(tmp);
            if (cur == nullptr) {
                cur = node;
            } else {
                cur->next = node;
                cur = cur->next;
            }
            l = l->next;
        }
        if (flag) {
            auto node = new ListNode(1);
            cur->next = node;
        }
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        if (l1 == nullptr && l2 == nullptr) {
            return nullptr;
        }
        int tmp;
        ListNode *head = nullptr;
        ListNode *cur = nullptr;
        bool flag = false;
        while (l1 != nullptr & l2 != nullptr) {
            tmp = l1->val + l2->val + flag;
            flag = tmp >= 10;
            tmp = tmp % 10;
            auto node = new ListNode(tmp);
            if (head == nullptr) {
                head = node;
                cur = node;
            } else {
                cur->next = node;
                cur = cur->next;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        //cout << flag << endl;
        if (l1 == nullptr && l2 == nullptr) {
            if (flag) {
                //cout << "Here" << endl;
                auto node = new ListNode(1);
                cur->next = node;
            }
        } else {
            if (l1 != nullptr) {
                helper(cur, l1, flag);
            } else {
                helper(cur, l2, flag);
            }
        }
        return head;
    }
};
// @lc code=end

int main()
{
    auto l = new ListNode(2);
    auto s = new ListNode(4);
    auto f = new ListNode(3);
    l->next = s;
    s->next = f;
    auto q = new ListNode(5);
    auto w = new ListNode(6);
    auto e = new ListNode(4);
    q->next = w;
    w->next = e;
    auto so = new Solution();
    so->addTwoNumbers(l, q);
}
