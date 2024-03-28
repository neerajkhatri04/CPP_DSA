#include<iostream>
#include<stack>
#include<cctype>

std::stack<int> st;

bool isRedundantBraces(std::string &s) {
    
    for(auto &ch : s) {
        if(ch == ')') {
            char top = st.top();
            st.pop();

            //if top was '(' or stack is empty
            bool flag = true;

            while(!st.empty() && st.top()!='(') {
                if(top == '*' || top=='/' || top=='-' || top =='+') {
                        flag = false;
                    } 

                    top = st.top();
                    st.pop();
            }
            if(flag == true) {
                return true;
            } 
        } else st.push(ch);
    }
    return false;
}

int main() {

    std::string expression;

    std::cout<<"Enter the expression: ";
    std::cin>>expression;

    if(isRedundantBraces(expression)) {
        std::cout<<"Redundant braces is present."<<std::endl;
    } else {
        std::cout<<"Redundant braces is not present."<<std::endl;
    };
    
    return 0;
}