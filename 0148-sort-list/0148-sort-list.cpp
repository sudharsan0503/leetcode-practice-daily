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
    ListNode* findmiddle(ListNode* temp){
        ListNode* slow=temp;
        ListNode* fast=temp->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* mergell(ListNode* left,ListNode* right){
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        while(left!=NULL && right!=NULL){
            if(left->val<right->val){
                temp->next=left;
                temp=left;
                left=left->next;
            }
            else{
                temp->next=right;
                temp=right;
                right=right->next;
            }
        }
        if(left) temp->next=left;
        else temp->next=right;

        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* middle=findmiddle(head);
        ListNode* right=middle->next;
        middle->next=nullptr;
        ListNode* left=head;
        left=sortList(left);
        right=sortList(right);
        return mergell(left,right);
    }
};