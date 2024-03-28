#include<iostream>
#include<stack>

class stack {

public:

    int top;
    int* arr;
    int size;

    stack(int size) {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data) {
        if(top > size - 1) {
            std::cout<<"Stack overflow"<<std::endl;
            return;
        } else {
            top++;
            arr[top] = data;
            std::cout<<"Pushed: "<<data<<std::endl;
        }
    }

    // void push(int data) {
    //     if(size-top>1) {
    //         top++;
    //         arr[top] = data;
    //         std::cout<<"Pushed: "<<data<<std::endl;
            
    //     } else {
    //         std::cout<<"Stack overflow"<<std::endl;
    //     }
    // }

    void pop() {
        if(top == -1) {
            std::cout<<"Stack underflow"<<std::endl;
        } else {
            top--;
        }
    }

    int getTop() {
        if(top == -1) {
            std::cout<<"Stack has no elements"<<std::endl;
        } else {
            return arr[top];
        }
        
    }

    int getSize() {
        return top+1;
    }

    bool isEmpty() {
        if(top == -1) {
            return true;
        } else {
            return false;
        }
    }

};

int main() {

    stack st(10);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    std::cout<<"Top element is: "<<st.getTop()<<std::endl;

    st.pop();

    std::cout<<"After poping top element is: "<<st.getTop()<<std::endl;

    // Print stack in reverse

    while(!st.isEmpty()) {
        std::cout<<st.getTop()<<std::endl;
        st.pop();
    }

    return 0;
}