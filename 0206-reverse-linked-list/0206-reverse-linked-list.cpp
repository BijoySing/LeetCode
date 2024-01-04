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
    void reverse(ListNode *&head,ListNode *cur){
        if(cur->next==nullptr){
            head=cur;
            return;
        };
        // x->next=tmp->next;
        reverse(head,cur->next);
        cur->next->next=cur;
        cur->next=nullptr;
                
    }
    ListNode* reverseList(ListNode* head) {
        ListNode *tmp=head;
        if(head==nullptr)return head;
        reverse(head,head);
        
        return head;
    }
};