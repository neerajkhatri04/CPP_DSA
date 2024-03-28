#include<iostream>
#include<stack>

int main() {

        std::stack<int> st;

        st.push(10);
        st.push(20);
        st.push(30);
        st.push(40);

        st.pop();

        //last element

        std::cout<<"Stack last element: "<<st.top()<<std::endl;

        if(st.empty()){
            std::cout<<"Stack is empty"<<std::endl;
        } else {
            std::cout<<"stack is not empty"<<std::endl;
        }

    return 0;
}