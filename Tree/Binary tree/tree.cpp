#include <iostream>
// #include "queue_CPP.h"
#include <queue>

class Tnode {
public:
    Tnode* lchild;
    int data;
    Tnode* rchild;

    Tnode(){
        lchild = NULL;
        rchild = NULL;
        data = 0;
    }

    Tnode(int data){
        lchild = NULL;
        rchild = NULL;
        this->data = data;
    }
};

Tnode* create(){

    std::queue<Tnode*> q;

    Tnode* p;
    int x=0,l=0,r = 0;

    std::cout<<"Enter root node: ";
    std::cin>>x;
    Tnode* root = new Tnode(x);

    q.push(root);

    while(!q.empty()){
        p = q.front();
        q.pop();

        std::cout<<"Enter left child of "<<p->data<<" : ";
        std::cin>>l;
        if(l!=-1){
            Tnode* t = new Tnode(l);
            p->lchild =  t;
            q.push(t);
        }

        std::cout<<"Enter right child of "<<p->data<<" : ";
        std::cin>>r;
        if(r!=-1){
            Tnode* t = new Tnode(r);
            p->rchild =  t;
            q.push(t);
        }
    }
    return root;
}

void postOrder(Tnode* root){

    if(root){
    postOrder(root->lchild);
    postOrder(root->rchild);
    std::cout<<root->data<<" ";
    }
}

int main() {

    Tnode* root = create();
    postOrder(root);

    return 0;
}