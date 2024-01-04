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
    ListNode* middleNode(ListNode* head) {
        ListNode *tmp=head;
        ListNode *x=head;
        int c=0;
        while(tmp!=nullptr){
            c++;
            tmp=tmp->next;
        }
        int s=c/2;
        while(s--){
           x=x->next;

        }
//         while(x!=nullptr){
//            cout<<x->val<<" ";
// x=x->next;
//         }
        // cout<<c<<endl;
        return x;
    }
};