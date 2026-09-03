/*
 * Problem: Reverse Linked List (#206)
 * URL: https://leetcode.com/problems/reverse-linked-list/
 * Language: cpp
 * Runtime: 0 ms | Memory: 13.4 MB
 * Submitted: 2026-09-03T10:36:19 (Submission ID: 2129505341)
 */

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
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(curr){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }        
        return prev;
        
    }
};
