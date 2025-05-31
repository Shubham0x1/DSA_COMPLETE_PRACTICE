#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// TreeNode definition
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Solution class
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if (root == NULL) {
            return {};
        }

        vector<int> result;
        queue<TreeNode*> que;
        que.push(root);

        while (!que.empty()) {
            int n = que.size();
            TreeNode* node = NULL;

            while (n--) {
                node = que.front();
                que.pop();

                if (node->left != NULL) {
                    que.push(node->left);
                }
                if (node->right != NULL) {
                    que.push(node->right);
                }
            }

            result.push_back(node->val);
        }

        return result;
    }
};

// Helper to build a simple tree for testing
TreeNode* buildTestTree() {
    // Example tree:
    //       1
    //      / \
    //     2   3
    //      \   \
    //       5   4

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(4);
    return root;
}

int main() {
    Solution sol;
    TreeNode* root = buildTestTree();

    vector<int> view = sol.rightSideView(root);

    cout << "Right side view: ";
    for (int val : view) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
