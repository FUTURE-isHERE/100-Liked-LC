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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        if(l1 == NULL and l2 == NULL){
            return NULL;
        }
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;

        ListNode* res = new ListNode(0);
        ListNode* curr = res;

        while(l1 != NULL and l2 != NULL){
            if(l1->val < l2->val){
                curr->next = new ListNode(l1->val);
                curr = curr->next;
                l1 = l1->next;
            }else{
                curr->next = new ListNode(l2->val);
                curr = curr->next;
                l2 = l2->next;
            }
        }

        while(l1){
            ListNode* temp = new ListNode(l1->val);
            curr->next = temp;
            curr = curr->next;
            l1 = l1->next;
        }

        while(l2){
            ListNode* temp = new ListNode(l2->val);
            curr->next = temp;
            curr = curr->next;
            l2 = l2->next;
        }

        return res->next;
    }
};