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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next){
            return head;
        }

        // cout<<head<<endl<<head->next<<endl;

        ListNode *temp=head->next->next, *newHead=head->next;
        head->next->next=head;
        head->next=temp;
        head=newHead;
        
//         cout<<head<<endl<<head->next<<endl;
        
//         cout<<head->val<<endl<<head->next->val<<endl;
        
        head->next->next = swapPairs(head->next->next);
        return head;
    }
};