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
        ListNode* temp=head;
        ListNode* trav=head;
        int count=0;
        int pos=0;

        while(temp!=NULL){
         temp=temp->next;
         count++;
        
        while(pos<count/2){
            trav=trav->next;
            pos++;
        }
        }
        return trav;
        
    }
};