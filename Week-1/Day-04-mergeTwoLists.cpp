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
        ListNode *res = new ListNode(0), *node = res;
        while(l1 or l2) {
            if(!l1) { node->next = l2; break; }
            if(!l2) { node->next = l1; break; }
            if(l1->val <= l2->val) {
                node->next = new ListNode(l1->val);
                l1 = l1->next;
            } else {
                node->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            node = node->next;
        }
        return res->next;
    }
};
