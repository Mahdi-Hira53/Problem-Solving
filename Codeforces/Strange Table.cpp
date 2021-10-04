#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    ll n,m,x,r,c,sum;
    for(int i=0; i<t; i++)
    {
        cin>>n>>m>>x;
        x--;
        c=x/n;
        r=x%n;
        sum=r*m+c+1;
        cout<<sum<<endl;
    }
}
