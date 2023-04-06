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
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int pos=count-n+1;
        
        if(count==1 && pos==1){
            return NULL;
        }
        
        if(pos==1){
            if(count==1){
                return NULL;
            }
            head=head->next;
            return head;
        }
        
        ListNode* prev=NULL;
        temp=head;
        int index=0;
        while(index!=pos-1){
            index++;
            prev=temp;
            temp=temp->next;
        }
        
        prev->next=temp->next;
        delete temp;
        
        return head;
    }
};