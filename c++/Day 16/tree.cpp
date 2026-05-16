#include <iostream>
using namespace std;

class TreeNode{
    private:
    int data;
    TreeNode* left;
    TreeNode* right;

    public:

    // Constructor
    TreeNode(int x){
        this->data = x;
        this->left = NULL;
        this->right = NULL;
    }

    
    void setLeft(TreeNode* node){
        left = node;
    }

   
    void setRight(TreeNode* node){
        right = node;
    }

  
    void display(){

        if(this)
            cout << this->data << endl;

        if(this->left)
            cout << this->left->data << endl;

        if(this->right)
            cout << this->right->data << endl;
    }
};

// Main function should be outside the class
int main(){

  
    TreeNode* root = new TreeNode(10);
    TreeNode* node1 = new TreeNode(20);
    TreeNode* node2 = new TreeNode(30);

   
    root->setLeft(node1);
    root->setRight(node2);

   
    root->display();

    return 0;
}