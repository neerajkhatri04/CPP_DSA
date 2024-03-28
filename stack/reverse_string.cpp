#include<iostream>
#include<string>
#include<stack>

int main(){
    

    std::string str = "Neeraj";
    std::stack<char> st;


    for(int i = 0; i<str.length(); i++) {
        st.push(str[i]);
    }

    while(!st.empty()){
        std::cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}