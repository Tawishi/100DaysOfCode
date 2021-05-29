#include<iostream>
#include<math.h>
using namespace std;

int main() {
//even-odd number
    int x, cp_x;
    cout<<"Enter x : ";
    cin>>x;
    cp_x = x;
    // cout<<(x&1)<<" ";
    if((x&1) == 0)
        cout<<"Even";
    if((x&1) == 1)
        cout<<"Odd";
//divisible by 2 to power k(=2)
    int k=2,y;
    y = pow(2,k)-1;
    // cout<<(x & y)<<" ";
    if( (x&y) == 0)
        cout<<"\nDivisible";
    else
        cout<<"\nIndivisible";

//negation
    cout<<"\n~x = "<<~x;
    cout<<"\t-x-1 = "<<-x-1;

//bitwise-shift operators
    cout<<"\nx<<4 = "<< (x<<4) ;
    cout<<"\tx * 2^4 = "<< (x * (pow(2,4)));
    cout<<"\nx>>4 = "<< (cp_x>>4);
    cout<<"\tx / 2^4 = "<< (int)(x / (pow(2,4)));

//checking kth bit using bti mask 1<<k(= 1 ending with k 0's)
    int b = 29; // 29 = 11101
    if(b & (1<<0))
        cout<<"\n1";
    else
        cout<<"\n0";
// printing binary form of number using bit-mask from above
    for(int i=31;i>=0;i--) { // for 32-bit number
        if (x & (1<<i))
            cout<<"1";
        else
            cout<<"0";
    }

// kth bit to 1 : x | (1<<k)

// kth bit to 0 : x & ~(1<<k)

// long long bit mask : 1LL<<k

// in-built functions
cout<<"\n"<< __builtin_clz(x)<<"\n"<<__builtin_ctz(x)<<"\n"<<__builtin_popcount(x)<<"\n"<<__builtin_parity(x);

return 0;

}