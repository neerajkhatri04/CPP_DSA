#include<iostream>

class stack {
    public:

    int* arr;
    int size;
    int top1;
    int top2;

    stack(int size) {
        arr = new int[size];
        this->size = size;
        top1 =  -1;
        top2 = size;
    }

    void push1(int data) {
        if(top2 - top1 == 1) {
            std::cout<<"Overflow stack 1"<<std::endl;
        } else {
            top1++;
            arr[top1] = data;
            std::cout<<"Pushed in stack 1: "<<data<<std::endl;
        }
    }

    void push2(int data) {
        if(top2 - top1 == 1) {
            std::cout<<"Overflow stack 2"<<std::endl;
        } else {
            top2--;
            arr[top2] = data;
            std::cout<<"Pushed in stack 2: "<<data<<std::endl;
        }
    }

    void pop1() {
        if(top1 == -1){
            std::cout<<"Underflow stack 1"<<std::endl;
        } else {
            top1--;
        }
    }
    
    void pop2() {
         if(top2 == size){
            std::cout<<"Underflow stack 2"<<std::endl;
        } else {
            top2++;
        }
    }

    int getTop1() {
        if(top1 == -1) {
            std::cout<<"Stack 1 is emptty"<<std::endl;
        } else return arr[top1];
    }

    int getTop2() {
        if(top2 == size) {
            std::cout<<"Stack 2 is emptty"<<std::endl;
        } else return arr[top2];
    }
};  


int main() {

    stack st(10);

    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push1(40);
    st.push2(10);
    st.push2(20);
    st.push2(30);
    st.push2(40);
    st.push2(200);
    st.push1(100);

    std::cout<<st.getTop1()<<" "<<st.getTop2();

    


    return 0;
}