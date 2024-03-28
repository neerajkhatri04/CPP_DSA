#include<iostream>

class queue {
public:

    int size;
    int rear;
    int front;
    int* arr;

    queue(int size) {
        this->size = size;
        rear = 0;
        front = 0;
        arr = new int[size];
    }

    void pop() {
        if(front == rear) {
            std::cout<<"Queue is empty.";
            return;
        }
        else {
            front++;
            if(front == rear) {
                front = 0;
                rear = 0;
            }
        }
    }

    void push(int data) {
        if(rear == size) {
            std::cout<<"Queue is full.";
            return;
        }

            arr[rear] = data;
            rear++;
            return;
       
    }

    int getSize() {
        return rear - front;
    }


    int getRear() {
        return arr[rear-1];
    }

    int getFront() {
        return arr[front];
    }

    bool isEmpty() {
        if(rear == front) {
            return true;
        } else {
            return false;
        }
    }

};

int main() {

    queue q(10);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);

    std::cout<<q.getRear()<<std::endl;
    q.pop();
    q.push(1);
    std::cout<<q.getFront()<<std::endl;
    std::cout<<q.getRear()<<std::endl;
    std::cout<<q.getSize()<<std::endl;
    

    return 0;
}