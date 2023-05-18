#include <iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    
    cin>>n;
     n = 2*n;
     for (int row = 0; row <=n; row++)
     {
        for (int col = 0; col <=n; col++)
        {
            int atEveryIndex = min(min(row,col),min(n-row,n-col));
            cout<<atEveryIndex<<" ";
        }
        cout<<endl;
     }
     
    return 0;
}