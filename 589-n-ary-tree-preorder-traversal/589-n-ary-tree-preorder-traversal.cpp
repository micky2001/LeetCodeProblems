/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
private:
    vector<int>res;
public:
    
    void func(Node* root){
        
        res.push_back(root->val);
        for(auto &x:root->children)
            func(x);
        
    }
    
    vector<int> preorder(Node* root) {
        
        if(root==NULL){
            return res;
        }
        
        func(root);
        return res;
        
    }
};