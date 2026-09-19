/*
 * Problem: Add Two Numbers (#2)
 * URL: https://leetcode.com/problems/add-two-numbers/
 * Language: cpp
 * Runtime: 0 ms | Memory: 77.2 MB
 * Submitted: 2026-09-19T19:06:40 (Submission ID: 2146981472)
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();
        ListNode* res = dummy;
        int total = 0, carry = 0;

        while (l1 || l2 || carry) {
            total = carry;

            if (l1) {
                total += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                total += l2->val;
                l2 = l2->next;
            }

            int num = total % 10;
            carry = total / 10;
            dummy->next = new ListNode(num);
            dummy = dummy->next;
        }

        ListNode* result = res->next;
        delete res;
        return result;         
    }
};
