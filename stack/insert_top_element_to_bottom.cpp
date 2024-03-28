#include<iostream>
#include<stack>

void insertAtBottom(std::stack<int> &st, int &target) {

    if(st.empty()) {
        st.push(target);
        return;
    }
    int temp = st.top();
    st.pop();

    insertAtBottom(st, target);

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

    int target = st.top();
    st.pop();
    insertAtBottom(st, target);

    
    while(!st.empty()){
        std::cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}