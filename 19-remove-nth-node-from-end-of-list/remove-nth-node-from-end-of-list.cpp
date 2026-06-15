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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL||head->next==NULL)return NULL;
        ListNode* temp=head;
        ListNode* curr=head;
        int count=1;
        while(temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        int pos=count-n+1;
        if(pos==1){
            head=head->next;
            return head;
        }
        int curr_pos=1;
        while(curr_pos<pos-1){
         curr=curr->next;
         curr_pos++;
        }
        ListNode* agla=curr->next;
        curr->next=agla->next;
        delete agla;
        return head;
    }
};