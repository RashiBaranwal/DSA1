#include <iostream>
#include<math.h>

using namespace std;

int decimalToBinary(int n){
    int ans = 0;
    int i = 0;

    while (n!=0)
    {
        int bit = n&1;
        ans = (bit * pow(n,i)) + ans;
        n = n>>1;
        i++;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    if (n<0)
    {
        //If num is negative
        n = n*(-1);
        int ans = decimalToBinary(n);
        //Find 2's Compliment of the number
        //1's Compliment
        int newAns = (~ans);
        //2's Compliment
        newAns = newAns + 1;
        cout<<newAns<<endl;
    }
    else{
        //If number is Positive
        int ans = decimalToBinary(n);
        cout<<ans<<endl;
    }
    
    return 0;
}