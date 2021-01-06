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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *node = head;
        set<int> s;
        while(node and node->next) {
            if(node->next->val == node->val)    s.insert(node->val);
            node = node->next;
        }
        node = head;
        ListNode *res = new ListNode(0), *temp = res;
        while(node) {
            if(!s.count(node->val)) {
                temp->next = new ListNode(node->val);
                temp = temp->next;
            }
            node = node->next;
        }
        return res->next;
    }
};
