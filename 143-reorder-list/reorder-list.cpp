class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        vector<int> v;
        ListNode* temp = head;
        while (temp) {
            v.push_back(temp->val);
            temp = temp->next;
        }

        vector<int> vv;
        int i = 0, j = v.size() - 1;
        while (i < j) {
            vv.push_back(v[i++]);
            vv.push_back(v[j--]);
        }
        if (i == j) vv.push_back(v[i]);

        temp = head;
        for (int val : vv) {
            temp->val = val;
            temp = temp->next;
        }
    }
};
