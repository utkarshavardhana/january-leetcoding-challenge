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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         bool carry = 0;
         ListNode *retVal = new ListNode(0);
         ListNode *result = retVal;
         while (1) {
             int val1 = 0, val2 = 0;
             if (l1)    val1 = l1->val;
             if (l2)    val2 = l2->val;
             int sum = val1 + val2 + carry;
             carry = sum / 10;
             result->val = sum % 10;
             if (l1)    l1 = l1->next;
             if (l2)    l2 = l2->next;
             if (!l1 && !l2 && !carry)  break;
             result->next = new ListNode(0);
             result = result->next;
         }

         return retVal;
    }
};
