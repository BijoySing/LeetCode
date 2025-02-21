class FindElements {
public:
    unordered_set<int> values;

    FindElements(TreeNode* root) {
        if (!root) return;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});

        while (!q.empty()) {
            auto [node, val] = q.front();
            q.pop();
            node->val = val;
            values.insert(val);

            if (node->left) q.push({node->left, 2 * val + 1});
            if (node->right) q.push({node->right, 2 * val + 2});
        }
    }

    bool find(int target) {
        return values.count(target);
    }
};
