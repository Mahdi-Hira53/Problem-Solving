#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double n;
        cin>>n;

        if(n<1500)
            cout<<fixed<<setprecision(2)<<n+(n*.1)+(n*.9)<<endl;
        else
            cout<<fixed<<setprecision(2)<<n+500+(n*.98)<<endl;
    }
}
