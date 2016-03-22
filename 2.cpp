

    // You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

    // Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)

    // Output: 7 -> 0 -> 8


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
 ListNode newNode(0);
        ListNode *cur1 = &newNode;
        ListNode *cur = cur1;
        cur->next = NULL;
        int flag = 0;
        while(l1 || l2)
        {
             cur->next = new ListNode(0);
             cur=cur->next;
            int il1,il2;
            if (!l1) il1=0;else il1=l1->val;
            if (!l2) il2=0;else il2=l2->val;
           cur->val = ((il1 + il2) + flag)%10;
           flag =  (il1 + il2+flag) / 10;
            if(l1) {
                l1 = l1->next;
            }
            if(l2) {
                l2 = l2->next;
            }
          
        }
       if(flag != 0) {
            cur->next = new ListNode(flag);
            cur = cur->next;
        }
        return cur1->next;

    }
};