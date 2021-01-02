//给你一个二叉树，请你返回其按 层序遍历 得到的节点值。 （即逐层地，从左到右访问所有节点）。 
//
// 
//
// 示例： 
//二叉树：[3,9,20,null,null,15,7], 
//
//     3
//   / \
//  9  20
//    /  \
//   15   7
// 
//
// 返回其层次遍历结果： 
//
// [
//  [3],
//  [9,20],
//  [15,7]
//]
// 
// Related Topics 树 广度优先搜索 
// 👍 723 👎 0
#include <vector>
#include <queue>
using namespace std;
struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 *
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root== nullptr)return {};
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>> rst;
        while (!q.empty()){
            vector<int> row;
            int range = q.size();
            for(int i =0;i<range;i++){
                auto elem = q.front();
                row.push_back(elem->val);
                q.pop();
                if(elem->left){
                    q.push(elem->left);
                }
                if(elem->right){
                    q.push(elem->right);
                }
            }
            rst.push_back(row);
        }
        return rst;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
