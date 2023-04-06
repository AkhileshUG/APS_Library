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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=head;
        
        while(curr && curr->next){
            if(curr->val == curr->next->val){
                ListNode* temp=curr;
                while(temp && temp->next && temp->val==temp->next->val){
                    temp=temp->next;
                }
                
                if(head==curr){
                    head=temp->next;
                    curr=head;
                    prev=head;
                    
                    continue;
                }
                prev->next=temp->next;
                curr=prev;
            }else{
                prev=curr;
                curr=curr->next;
            }
        }
        
        return head;
    }
};