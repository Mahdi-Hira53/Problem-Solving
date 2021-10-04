#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n,cnt,ans;
        cin>>x>>y>>n;
        cnt = n/x;
        ans = x*cnt+y;
        if(ans>n)
            ans-=x;

        cout<<ans<<endl;
    }
    return 0;
}
