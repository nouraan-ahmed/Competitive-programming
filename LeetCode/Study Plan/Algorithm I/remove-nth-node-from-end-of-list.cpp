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
        ListNode* node = head;
        ListNode* newnode = head;
        ListNode* prev = head;
        int size=0;
        while(node!=NULL){
            node=node->next;
            size++;
        }
        int ind=size-n;
        
        if(ind==0){
            head=head->next;
        }
        else if(newnode!=NULL){
            for(int i=0;i<ind;i++){
                prev=newnode;
                newnode=newnode->next;
            }
            prev->next=newnode->next;   
        }
        return head;
    }
};
