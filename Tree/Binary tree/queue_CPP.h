#include <iostream>

#ifndef queue_CPP
#define queue_CPP

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

class Node {
public:
    Tnode* data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(Tnode* data){
        this->data = data;
        this->next = NULL;
    }
};

class queue {
private:
    Node* rear;
    Node* front;
public:
    queue() {rear = front = NULL;}
    void enqueue(Tnode* p);
    Tnode* dequeue();
    void display();
    bool isEmpty();
};

void queue::enqueue(Tnode* p){
    Node* t = new Node();

    if(t == NULL){
        std::cout<<"Queue overflow !"<<std::endl;
        return;
    }

    t->data = p;

    if(front == NULL){
        front = rear = t;
    } else {
        rear->next = t;
        rear = t;
    }
}

Tnode* queue::dequeue(){
    Tnode* x = NULL;

    if(front == NULL){
        std::cout<<"Queue underflow !"<<std::endl;
        return x;
    }

    Node* p = front;
    x = p->data;
    front = front->next;
    delete p;

    return x;
}

void queue::display(){
    Node* p = front;

    while(p){
        std::cout<<p->data<<" ";
        p = p->next;
    }
    std::cout<<std::endl;
}

bool queue::isEmpty() {
    if(front == NULL){
        return true;
    }
    return false;
}

#endif