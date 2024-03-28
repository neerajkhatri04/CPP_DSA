#include<iostream>
#include<stack>

void insertAtBottom(std::stack<int> &st, int &target) {
    //base case
    if(st.empty()) {
        st.push(target);
        return;
    }
    
    //find top
    int temp = st.top();
    st.pop();

    //recursive call
    insertAtBottom(st, target);

    //push remaining stored temp elements
    st.push(temp);
} 

void reverseStack(std::stack<int> &st) {
    //base case
    if(st.empty()) {
        return;
    } 

    //find top
    int target = st.top();
    st.pop();

    //reverse stack
    reverseStack(st);

    //insert target at bottom

    insertAtBottom(st, target);

}

int main() {

    std::stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);


    reverseStack(st);
    
    std::cout<<"Reversed stack"<<std::endl;
    while(!st.empty()){
        std::cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}