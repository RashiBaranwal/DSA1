//It is Dynamic in nature
//Size can be Increased and decreased
#include <iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> a(5,1); //It means size will be 5 and
    // all elements will be initialized with 1
    //Otherwise default values will be 0 of this vector if we donot initialize it by 1
    cout << "Print a --> " << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    //If we want to copy a vector in another vector
    vector<int> last(a);
    cout << "Print last --> " << endl;
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    cout<<"New vector v --> "<<endl;
    vector<int> v;
    cout<<"Capacity--> "<<v.capacity()<<endl;// B/c no element is there

    v.push_back(1);
    cout << "Capacity--> " << v.capacity() << endl; 
    
    v.push_back(2);
    cout << "Capacity--> " << v.capacity() << endl; 
    
    v.push_back(3);
    cout << "Capacity--> " << v.capacity() << endl; //Capacity Doble hoti hai humesha
    cout<<"Size--> "<<v.size()<<endl; //It shows ki how many Elements are present
    
    cout<<"Element at 2nd Index "<<v.at(2)<<endl;

    cout<<"First element-> "<<v.front()<<endl;
    cout<<"Last element -> "<<v.back()<<endl;

    cout<<"before pop"<<endl;

    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    cout<<"Before clear size-> "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size-> "<<v.size()<<endl;

    return 0;
}