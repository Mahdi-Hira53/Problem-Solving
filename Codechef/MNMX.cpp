#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5];
        ll mn=INT_MAX;
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            mn=min(mn,a[i]);
        }

        //sort(a,a+n);

        cout<<mn*(n-1)<<endl;
    }
}
