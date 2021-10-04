#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+5;
int a[N];

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mx=INT_MIN;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            if(i>=2)
                mx=max(mx,a[i]*a[i-1]);
        }
        cout<<mx<<endl;
    }

    return 0;
}
