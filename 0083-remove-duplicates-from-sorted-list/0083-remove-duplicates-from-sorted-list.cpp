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
    ListNode* deleteDuplicates(ListNode* head) {
         for (ListNode *tmp = head; tmp != NULL; tmp = tmp->next)
    {
        ListNode *tmp1 = tmp;
        while (tmp1->next != NULL) 
        {
            if (tmp1->next->val == tmp->val)
            {
                ListNode *deleteNode=tmp1->next;
                tmp1->next=tmp1->next->next;
                delete deleteNode;
            }
            else{
                tmp1=tmp1->next;
            }
        }
    }
return head;
    }
};