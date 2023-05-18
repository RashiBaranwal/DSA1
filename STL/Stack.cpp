//Last in First Out
#include <iostream>
#include<stack>

using namespace std;

int main(){
    stack<string> s;

    s.push("Cpp");
    s.push("Java");
    s.push("Python");

    cout<<"Top Element before pop-> "<<s.top()<<endl;

    s.pop();
    cout<<"Top Element after pop -> "<<s.top()<<endl;

    cout<<"Size Element-> "<<s.size()<<endl;
    cout<<"Empty or Not Element-> "<<s.empty()<<endl;
    
    return 0;
}