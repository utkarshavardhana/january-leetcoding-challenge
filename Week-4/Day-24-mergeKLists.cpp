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
typedef pair<int, ListNode*> PAIR;
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* res = new ListNode(0), *t = res;
        priority_queue<PAIR, vector<PAIR>, greater<PAIR>> p;
        for(int i=0; i<lists.size(); i++) {
            if(lists[i])    p.push({lists[i]->val, lists[i]});
        }
        while(!p.empty()) {
            auto x = p.top();
            p.pop();
            t->next = new ListNode(x.first);
            if(x.second->next) {
                p.push({x.second->next->val, x.second->next});
            }
            t = t->next;
        }
        return res->next;
    }
};