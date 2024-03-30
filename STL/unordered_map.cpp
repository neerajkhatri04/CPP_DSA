#include <iostream>
#include <unordered_map>

int main() {

    //creation
    std::unordered_map<std::string, int> m;

    //insertion
    std::pair<std::string, int> p = std::make_pair("aaa", 1);
    m.insert(p);

    std::pair<std::string, int> q("bbb", 2);
    m.insert(q);

    m["ccc"] = 3;

    //accessing
    std::cout<<m.at("aaa")<<std::endl;
    std::cout<<m.at("bbb")<<std::endl;
    std::cout<<m["ccc"]<<std::endl;

    //searching
    std::cout<<m.count("aaa")<<std::endl; //true --> 1
    std::cout<<m.count("ddd")<<std::endl; //false --> 0

    if(m.find("ccc") != m.end()) {
        std::cout<<"Element found"<<std::endl;
    } else {
        std::cout<<"Element not found"<<std::endl;
    }

    //size

    std::cout<<m.size()<<std::endl;//3
    std::cout<<m["ddd"]<<std::endl; //0
    std::cout<<m.size()<<std::endl;//4

    //iteration

    for(auto i: m) {
        std::cout<<"key-"<<i.first<<" value-"<<i.second<<std::endl; 
    }

    //number of characters
    
    std::string str = "thiruvananthapuram";
    std::unordered_map<char, int> freq;

    for(auto ch: str) {
        freq[ch]++;
    }

    for(auto i: freq) {
        std::cout<<i.first<<" : "<<i.second<<std::endl;
    }


    return 0;
}