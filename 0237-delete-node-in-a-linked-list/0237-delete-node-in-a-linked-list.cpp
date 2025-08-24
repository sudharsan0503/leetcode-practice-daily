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
    void deleteNode(ListNode* node) {
        /*if(node==NULL||node->next==NULL){
            free(node);
            return;
        }no need as givn node is valid and not the last node.*/
        node->val=node->next->val;
        node->next=node->next->next;
        return;
    }
};