#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=0;
        if(n<=6 )
        {
            ans=15;
        }
        else if(n<=8)
        {
            ans=20;
        }
        else if(n<=10)
        {
            ans=25;
        }
        else
        {
            if(n%2==1)
            {
                n=n+1;
            }
            ans=n/2 *5;

        }

        cout<<ans<<endl;



    }
    return 0;
}
