/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(0);
        vector<int> v;
        while (list1 != NULL) {
            v.push_back(list1->val);
            list1 = list1->next;
        }
        while (list2 != NULL) {
            v.push_back(list2->val);
            list2 = list2->next;
        }
        sort(v.begin(), v.end());
        ListNode* tmp = ans;
        for (auto u : v) {
            tmp->next = new ListNode(u);
            tmp = tmp->next;
        }
        return ans->next;
    }
};