/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


class Solution {
public:
    bool hasCycle(ListNode *head) {
       vector<ListNode *> vect;
        while(head!=NULL){
            if(binary_search (vect.begin(), vect.end(), head)){
                return true;
            }
            else{
                vect.push_back(head);
                head=head->next;
            }
        }
        return false;
    }
};
