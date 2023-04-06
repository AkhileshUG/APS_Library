#include<bits/stdc++.h>
using namespace std;

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL){
            return NULL;
        }
        
        map<Node*,Node*>nodes;
        
        Node* ptr=head;
        while(ptr!=NULL){
            nodes[ptr]=new Node(ptr->val);
            ptr=ptr->next;
        }
        
        ptr=head;
        
        while(ptr!=NULL){
            nodes[ptr]->next= nodes[ptr->next];
            nodes[ptr]->random= nodes[ptr->random];
            ptr=ptr->next;
        }
        return nodes[head];
    }
};