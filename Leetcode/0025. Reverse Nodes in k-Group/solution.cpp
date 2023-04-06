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
    ListNode* getKthNode(ListNode* curr, int k){
        while(curr!=NULL && k>0){
            curr=curr->next;
            k--;
        }
        
        return curr;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* groupPrev = dummy;
        
        while(true){
            ListNode* kthNode = getKthNode(groupPrev, k);
            if(!kthNode){
                break;
            }
            
            ListNode* groupNext = kthNode->next;
            ListNode* curr = groupPrev->next;
            ListNode* prev = kthNode->next;
            
            while(curr != groupNext){
                ListNode* temp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = temp;
            }
            
            ListNode* temp = groupPrev->next;
            groupPrev->next = kthNode;
            groupPrev = temp;
        }
        
        return dummy->next;
    }
};