#include<iostream>
#include<stack>

void findMid(std::stack<int> &st, int &totalSize){

    if(st.empty()) {
        std::cout<<"Stack is empty"<<std::endl;
    }

    //Base case//
    if(st.size() == (totalSize/2)+1){
        std::cout<<"Mid element is: "<<st.top()<<std::endl;
        return;
    }

    int temp = st.top();
    st.pop();

    //Recursive call//
    findMid(st, totalSize);

    //Back track//
    st.push(temp);
}

int main() {

    std::stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);

    int size = st.size();
    findMid(st, size);

    std::cout<<"top element is: "<<st.top()<<std::endl;

    return 0;
}