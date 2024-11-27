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
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
         if (!head || !head->next) return head;  
    
    ListNode* sorted = new ListNode(0); 

    ListNode* current = head;
    while (current) {
        ListNode* nextNode = current->next;  

        ListNode* prev = sorted;
        ListNode* iter = sorted->next;

        while (iter && iter->val < current->val) {
            prev = iter;
            iter = iter->next;
        }

        current->next = iter;
        prev->next = current;

        current = nextNode;
    }

    ListNode* sortedHead = sorted->next;
    delete sorted;  
    return sortedHead;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;

    }
};