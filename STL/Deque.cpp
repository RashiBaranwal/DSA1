// Deque --> Doubly ended queue . Removal and addition from both the end.
// Multiple fixed Static Array //Dynamic in Nature
// Random Access Possible using at()

#include <iostream>
#include <deque>

using namespace std;

int main()
{

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    //    cout<<"After pop back --> ";
    //     d.pop_back();

    //     for (int i : d)
    //     {
    //         cout << i << " ";
    //     }

    cout << "Print First index Element-> " << d.at(1) << endl;
    cout << "Print Zero index Element-> " << d.at(0)<<endl;

    cout<<"front "<<d.front()<<endl;
    cout<<"Back "<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;

    cout<<"Size before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"Size after erase "<<d.size()<<endl;

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}