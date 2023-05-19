//All unique elements are stored always
//We cannot modify it
//We use BST
//Element return in sorted order

#include <iostream>
#include<set>

using namespace std;

int main(){
    set<int> s;
    set<int> t;

    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(9);

    for(auto i: s){
        cout<<i<<endl;
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for (auto i : s)
    {
        cout << i << endl;
    }
    cout<<endl;

    cout<<"5 is present or not-> "<<s.count(5)<<endl;
    cout<<"-5 is present or not-> "<<s.count(-5)<<endl;

    set<int>::iterator itr = s.find(5);

    for (auto it = itr; it != s.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;
    

    cout<<"NEW ARRAY WITH REPETITION OF ELEMENT "<<endl;
    t.insert(0);
    t.insert(0);
    t.insert(9);
    t.insert(9);
    t.insert(3);
    t.insert(3);
    t.insert(3);

    for(auto i: t){
        cout<<i<<endl;
    }
    return 0;
}