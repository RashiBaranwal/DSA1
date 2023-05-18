// No direct access possible in List
#include <iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;

    list<int> n(l); //Coping the 'l' list in 'n' list
    cout<<"Printing 'n' list --> "<<endl;
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    list<int> m(5,100);
    cout<<"Printing list 'm' -> "<<endl;
    for (int i : m)
    {
        cout << i << " ";
    }
    cout << endl;

    l.push_back(1);
    l.push_front(2);

    for (int i:l)
    {
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size of list "<<l.size()<<endl;
    
    return 0;
}