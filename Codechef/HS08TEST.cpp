#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double k,sum;
    cin>>n>>k;

    if(n%5==0)
    {
        sum=n+0.5;
        if(sum<=k)
            cout<<fixed<<setprecision(2)<<k-sum<<endl;
        else
            cout<<fixed<<setprecision(2)<<k<<endl;
    }
    else
        cout<<fixed<<setprecision(2)<<k<<endl;
}
