#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll mx=0;
        if(b/2>=a)
            mx=b-(b/2)-1;
        else
            mx=b%a;

        cout<<mx<<endl;
    }
}
