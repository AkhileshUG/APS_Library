#include<bits/stdc++.h>
using namespace std;

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

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy_head= new ListNode(0);
        ListNode* l3=dummy_head;
        
        int carry=0;
        while(l1!=NULL || l2!=NULL){
            int l1_val = (l1!=NULL)?l1->val:0;
            int l2_val = (l2!=NULL)?l2->val:0;
            
            int curr_sum=l1_val+l2_val+carry;
            carry=curr_sum/10;
            int last_digit=curr_sum%10;
            
            ListNode* node=new ListNode(last_digit);
            l3->next=node;
            
            if(l1!=NULL){
                l1=l1->next;
            }
            if(l2!=NULL){
                l2=l2->next;
            }
            l3=l3->next;
        }
            
        if(carry>0){
            ListNode* node=new ListNode(carry);
            l3->next=node;
            l3=l3->next;
        }
        return dummy_head->next;
    }
};