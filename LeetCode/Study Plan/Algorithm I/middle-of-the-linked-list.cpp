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
        ListNode* newhead=head;
        int size=0;
        while(newhead!=NULL){
            size++;
            newhead=newhead->next;
        }
        int mid=ceil(size/2);
        while(mid){
            head=head->next;
            mid--;
        }
        return head;
    }
};
