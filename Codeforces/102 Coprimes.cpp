#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,cnt=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        p=__gcd(i,n);
        if(p==1)
        {
            cnt++;
        }

    }
    cout<<cnt<<endl;

    return 0;
}
