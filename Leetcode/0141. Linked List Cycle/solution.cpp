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
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return false;
        }
//         map<ListNode *,bool> isVisited;
//         ListNode *temp=head;
        
//         while(temp!=NULL){
//             if(isVisited[temp]){
//                 return true;
//             }
//             isVisited[temp]=true;
//             temp=temp->next;
//         }
//         return false;
        ListNode *slow=head;
        ListNode *fast=head->next;
        while(slow!=fast){
            if(fast==NULL || fast->next==NULL){
                return false;
            }

            slow=slow->next;
            fast=fast->next->next;
        }
        return true;
    }
};