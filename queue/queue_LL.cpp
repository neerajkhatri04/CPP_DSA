#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(int data){
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
    void enqueue(int data);
    int dequeue();
    void display();
    bool isEmpty();
};

void queue::enqueue(int data){
    Node* t = new Node();

    if(t == NULL){
        std::cout<<"Queue overflow !"<<std::endl;
        return;
    }

    t->data = data;

    if(front == NULL){
        front = rear = t;
    } else {
        rear->next = t;
        rear = t;
    }
}

int queue::dequeue(){
    int x = -1;

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

int main() {

    queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    
    q.dequeue();
    int x = q.dequeue();

    std::cout<<x<<std::endl;
    q.display();

    return 0;
}