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
    ListNode* reverseList(ListNode* head) {
        // head -> node1 -> node2 -> node3 -> node4
            // |       |          |
            // ptr     nextptr    nextnextptr
        // node0 <- node1 <- node2 <- node3 <- head
        
        if (head == NULL) {
            return NULL;
        }

        // validate that the list is bigger than one element
        if (head -> next == NULL) {
            return head;
        }

        ListNode *ptr = NULL;
        ListNode *nextPtr = head;

        while (nextPtr != NULL) {
            ListNode *temp = nextPtr -> next;
            nextPtr -> next = ptr;
            ptr = nextPtr;
            nextPtr = temp;
        }
        
        return ptr;
    }
};
