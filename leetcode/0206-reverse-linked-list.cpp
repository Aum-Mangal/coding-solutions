/*
 * Problem: Reverse Linked List (#206)
 * URL: https://leetcode.com/problems/reverse-linked-list/
 * Language: cpp
 * Runtime: 13 ms | Memory: 13.4 MB
 * Submitted: 2026-09-03T10:43:48 (Submission ID: 2129511653)
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr)
            return head;

        ListNode* left = head;
        ListNode* right = head;

        while (right->next != nullptr) {
            right = right->next;
        }

        while (left != right && left->next != right) {
            int temp = left->val;
            left->val = right->val;
            right->val = temp;

            left = left->next;

            ListNode* prev = head;
            while (prev->next != right) {
                prev = prev->next;
            }
            right = prev;
        }

        if (left != right) {
            int temp = left->val;
            left->val = right->val;
            right->val = temp;
        }

        return head;
    }
};
