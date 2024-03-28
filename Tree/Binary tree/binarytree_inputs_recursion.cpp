#include<iostream>

class node {
public:

    node* left;
    int data;
    node* right;

    node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};

node* createTree(node* &root) {

    int data;
    std::cout<<"Enter the data: ";
    std::cin>>data;

    if(data == -1) {
        return NULL;
    }

    root = new node(data);

    std::cout<<"Enter left child data: ";
    root->left = createTree(root->left);
    std::cout<<"Enter right child data: ";
    root->right = createTree(root->left);

    return root;
}


int main() {

    node* root = NULL;

    root = createTree(root);

    return 0;
}