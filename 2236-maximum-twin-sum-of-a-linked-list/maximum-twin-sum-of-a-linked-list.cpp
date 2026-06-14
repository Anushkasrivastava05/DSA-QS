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
    int pairSum(ListNode* head) {
        int n=0;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=NULL;
        ListNode* curr=slow;


        while(curr!=NULL){
             ListNode* agla=curr->next;
            curr->next=prev;
            prev=curr;
            curr=agla;
            
        }
        int max_sum=0;
        ListNode* first=head;
        ListNode* second=prev;

        while(second !=NULL){
            max_sum=max(max_sum,first->val+second->val);
            first=first->next;
            second=second->next;
        }

        return max_sum;
    }
};