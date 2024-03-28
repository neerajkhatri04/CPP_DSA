#include<iostream>

class queue {
    public:
    int front;
    int rear;
    int size;
    int* arr;

    queue(int size) {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void enqueue(int data) {
        //Q is full
        if((rear + 1) % size == front) {
            std::cout<<"Queue is full."<<std::endl;
            return;
        }
        //Move rear circular
        rear = (rear+1)%size;
        arr[rear] = data;

    }

    int dequeue() {

        int x = -1;
        //Q is empty
        if(rear == front) {
            std::cout<<"Queue is empty."<<std::endl;
            return x;
        } 

        front = (front+1)%size;
        x = arr[front];

        return x;
    }

    bool isEmpty() {
        if(front == rear) {
            return true;
        } else return false;
    }

    int getFront(){
        if(front == rear){
            std::cout<<"stack is empty."<<std::endl;
            return -1;
        } else  return arr[(front+1)%size];
    }

    // int getRear() {
    //     if(front == rear){
    //         std::cout<<"stack is empty."<<std::endl;
    //         return -1;
    //     } else  return arr[rear];
    // }

    void display(){
        
        int i = front + 1;

        do {
            std::cout<<arr[i]<<" ";
            i = (i+1)%size;
        } while(i != (rear+1)%size);

    }

};

int main() {

    queue q(10);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    
    std::cout<<q.getFront()<<std::endl;
    int x = q.dequeue();
    q.enqueue(1);
    std::cout<<q.getFront()<<std::endl;
    std::cout<<x<<std::endl;

    q.display();
    return 0;
}