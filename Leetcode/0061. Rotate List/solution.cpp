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
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        ListNode* temp=head;
        ListNode* tail=head;
        int N=1;
        while(temp->next!=NULL){
            N++;
            temp=temp->next;
        }
        temp->next=head;
        
        k%=N;
        // temp=head;
        
        if(k){
            for(int i=0;i<N-k;i++){
                temp=temp->next;
            }
        
        }
        
        head=temp->next;
        temp->next=NULL;    
        
        return head;
    }
};