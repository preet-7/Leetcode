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
    void reorderList(ListNode* head) {
        if(head->next==NULL) return;
        ListNode* prev=NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast!=NULL && fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=NULL;
        
        ListNode* L1=head;
        ListNode* L2=reverse(slow);
        merge(L1,L2);       
    }
private:
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode *curr=head;
        ListNode *next=curr->next;
        
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev; 
    }
    void merge(ListNode* L1, ListNode* L2){
        while (L1 != NULL) {
        ListNode*p1=L1->next;
        ListNode*p2=L2->next;
        
        L1->next=L2;
        if(p1==NULL) break;
        L2->next=p1;
        L1=p1;
        L2=p2;
        }
    }
};