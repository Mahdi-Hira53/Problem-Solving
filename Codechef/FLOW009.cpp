#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double p,q;
        cin>>q>>p;

        if(q>1000)
            cout<<fixed<<setprecision(6)<<(p*q)-(p*q*0.1)<<endl;
        else
            cout<<fixed<<setprecision(6)<<q*p<<endl;
    }
}


