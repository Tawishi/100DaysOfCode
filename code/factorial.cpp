#include<bits/stdc++.h>

using namespace std;

string solve(int A) 
{
    string s="1";
    for(int i=2;i<=A;i++)
    {
        int c=0;
        string h="";
        for(int j=s.size()-1;j>=0;j--)
        {
            int p=(s[j]-'0')*i+c;
            h=to_string(p%10)+h;
            c=p/10;
        }
        if(c!=0)
        h=to_string(c)+h;
        s=h;
    }
    return s;
}

int main()
{
    int x;
    cout<<"Enter number : ";
    cin>>x;
    cout<<"Factorial of "<<x<<" is\n"<<solve(x);
    return 0;
}
