
class FindElements {
public:
    set<int> st;  // Set to store recovered values

    void bfs(TreeNode* root) {
        queue<TreeNode*> q;
        root->val = 0; // Root starts with value 0
        q.push(root);
        st.insert(0);

        while (!q.empty()) {
            TreeNode* f = q.front();
            q.pop();

            if (f->left) {
                f->left->val = 2 * f->val + 1;
                st.insert(f->left->val);
                q.push(f->left);
            }
            if (f->right) {
                f->right->val = 2 * f->val + 2;
                st.insert(f->right->val);
                q.push(f->right);
            }
        }
    }

    FindElements(TreeNode* root) {
        if (root) {
            bfs(root);
        }
    }

    bool find(int target) {
        return st.count(target);
    }
};
