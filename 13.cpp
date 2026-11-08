class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> st;
        TreeNode* current = root;

        while (current != nullptr || !st.empty()) {
            while (current != nullptr) {
                st.push(current);
                current = current->left;
            }

            current = st.top();
            st.pop();

            k--;

            if (k == 0) {
                return current->val;
            }

            current = current->right;
        }

        return -1;
    }
};