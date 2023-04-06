#include<bits/stdc++.h>
using namespace std;

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution {
public:
    void DFS(Node* current, Node* current_copy, vector<Node*>& visited){
        visited[current_copy->val]=current_copy;
        
        for(auto neighbor:current->neighbors){
            if(visited[neighbor->val]==NULL){
                Node *new_node=new Node(neighbor->val);
                current_copy->neighbors.push_back(new_node);
                DFS(neighbor, new_node, visited);
            }else{
                current_copy->neighbors.push_back(visited[neighbor->val]);
            }
        }
    }
    
    
    Node* cloneGraph(Node* node) {
        if(node==NULL){
            return NULL;
        }
        
        vector<Node*>visited(101,NULL);
        Node* copy = new Node(node->val);
        visited[node->val]=copy;
        
        for(auto neighbor:node->neighbors){
            if(visited[neighbor->val]==NULL){
                Node *new_node=new Node(neighbor->val);
                copy->neighbors.push_back(new_node);
                DFS(neighbor, new_node, visited);
            }else{
                copy->neighbors.push_back(visited[neighbor->val]);
            }
        }
        
        return copy;
    }
};