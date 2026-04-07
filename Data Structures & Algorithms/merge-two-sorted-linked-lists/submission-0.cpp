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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL && list2 == NULL) return NULL;

        ListNode *h1 = list2;
        ListNode *h2 = list1;
        ListNode *newHead = NULL;
        int i = 1;

        if (h1 == NULL) {newHead = h2; return newHead;}
        if (h2 == NULL) {newHead = h1; return newHead;}
        
        if (h1 -> val <= h2 -> val) {
            newHead = h1;
            h1 = h1 -> next;
        } else {
            newHead = h2;
            h2 = h2 -> next;
        }

        while (h1 != NULL && h2 != NULL) {
            ListNode *temp = newHead;

            if (h1 -> val <= h2 -> val) {
                // attach h1 to the end of the new list
                for (int j {0}; j < (i - 1); j++) {
                    temp = temp -> next;
                }
                i++;
                temp -> next = h1;
                h1 = h1 -> next;
            } else {
                // attach h2 to the end of the new list
                for (int j {0}; j < (i - 1); j++) {
                    temp = temp -> next;
                }
                i++;
                temp -> next = h2;
                h2 = h2 -> next;
            }
        }

        if (h1 != NULL) {
            // attach the rest of h1 to the end of the new list
            ListNode *temp = newHead;
            for (int j {0}; j < (i - 1); j++) {
                temp = temp -> next;
            }
            temp -> next = h1;
        }

        if (h2 != NULL) {
            // attach the rest of h2 to the end of the new list
            ListNode *temp = newHead;
            for (int j {0}; j < (i - 1); j++) {
                temp = temp -> next;
            }
            temp -> next = h2;
        }

        return newHead;
    }
};
