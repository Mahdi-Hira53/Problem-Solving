#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,p,q,r,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        p=n/3;
        q=n-p;
        r=q/2;
        sum=(p*1)+(2*r);
        if(sum==n)
            cout<<p<<" "<<r<<endl;
        else
            cout<<p+1<<" "<<r<<endl;
    }

    return 0;

}
