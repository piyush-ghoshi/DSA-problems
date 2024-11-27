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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);
        ListNode* ptr= result;
        int carry=0;
        while(l1 != nullptr|| l2 != nullptr){
            int sum =0 + carry;
            if (l1 != NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if (l2 != nullptr){
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;
            sum= sum%10;
            ptr->next=new ListNode(sum);
            ptr= ptr->next;

        }
        if (carry==1)ptr->next = new ListNode (1);
        return result->next ;
        
    }
};