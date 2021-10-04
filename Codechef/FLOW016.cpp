#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll m,n,ans1,ans2;
        cin>>m>>n;
        ans1=__gcd(m,n);
        ans2=(m*n)/__gcd(m,n);

        cout<<ans1<<" "<<ans2<<endl;

    }
}
