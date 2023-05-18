#include <iostream>
using namespace std;

int main()
{
    // right pasal triangle
    int n = 5;
    for (int  row = 0;  row < 2*n;  row++)
    {
        int Numcol;
        if (row<n)
        {
         Numcol = row;
        }
        else{
            Numcol = 2*n-row;
        }
        int space = n-Numcol;
        for (int s = 0;  s <space;  s++)
        {
           cout<<" ";
        }
        
        for (int col = 0; col < Numcol; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}