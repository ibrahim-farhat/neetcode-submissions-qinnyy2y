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
        if (list1 == NULL) {return list2;}
        if (list2 == NULL) {return list1;}

        ListNode *h1 = list2;
        ListNode *h2 = list1;
        ListNode *newHead = NULL;
        ListNode *lastNode = NULL;


        if (h1 -> val <= h2 -> val) {
            newHead = h1;
            h1 = h1 -> next;
        } else {
            newHead = h2;
            h2 = h2 -> next;
        }
        
        lastNode = newHead;

        while (h1 != NULL && h2 != NULL) {
            if (h1 -> val <= h2 -> val) {
                // attach h1 to the end of the new list
                lastNode -> next = h1;
                lastNode = h1;
                h1 = h1 -> next;
            } else {
                // attach h2 to the end of the new list
                lastNode -> next = h2;
                lastNode = h2;
                h2 = h2 -> next;
            }
        }

        if (h1 != NULL) {
            // attach the rest of h1 to the end of the new list
            lastNode -> next = h1;
        }

        if (h2 != NULL) {
            // attach the rest of h2 to the end of the new list
            lastNode -> next = h2;
        }

        return newHead;
    }
};
