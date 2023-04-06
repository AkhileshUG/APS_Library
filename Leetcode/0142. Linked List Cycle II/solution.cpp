#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL){
            return NULL;
        }
        
        if(head==head->next){
            return head;
        }
        
//         map<ListNode *,bool> isVisited;
//         ListNode *temp=head;
        
//         while(temp!=NULL){
//             if(isVisited[temp]){
//                 return temp;
//             }
//             isVisited[temp]=true;
//             temp=temp->next;
//         }
        
        ListNode *entry=head;
        ListNode *slow=head;
        ListNode *fast=head;
        
        while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast){
                while(slow!=entry){
                    slow=slow->next;
                    entry=entry->next;
                }
                return entry;
            }
        }
        
        return NULL;
    }
};