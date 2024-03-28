#include<iostream>
#include<queue>

std::string firstNonRepeatingChar(std::string input) {

    std::queue<char> q;
    char freq[26] = {0};
    std::string ans = "";

    for(int i=0; i<input.length(); i++) {

        char ch = input[i];

        freq[ch-'a']++;

        q.push(ch);

        while(!q.empty()){

            if(freq[q.front()-'a']>1) {
                q.pop();
            } else {
                ans.push_back(q.front());
                break;
            }
        }

        if(q.empty()){
            ans.push_back('#');
        }
    }
    return ans;
}

int main() {

    std::string input = "zarcaazrd";

    std::cout<<  firstNonRepeatingChar(input);

    return 0;
}