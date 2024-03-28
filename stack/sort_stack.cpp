#include<iostream>
#include<stack>

void insertSorted(std::stack<int> &st, int &target) {

    if(st.empty()) {
        st.push(target);
        return;
    }
    if(st.top()<=target) {
        st.push(target);
        return;
    }

    int topElement = st.top();
    st.pop();

    insertSorted(st, target);

    st.push(topElement);

}

void sortStack(std::stack<int> &st) {
    if(st.empty()) {
        return;
    }

    int temp = st.top();
    st.pop();

    sortStack(st);
    insertSorted(st, temp);
}

int main() {

    std::stack<int> st;

    st.push(10);
    st.push(40);
    st.push(50);
    st.push(20);
    st.push(70);
    st.push(0);
    sortStack(st);

    while(!st.empty()){
        std::cout<<st.top()<<std::endl;
        st.pop();
    }

    return 0;
}