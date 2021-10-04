#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,a,b,c,n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>b>>c;
        if(a>b && a<c || a>c && a<b)
        {
            s=a;
        }
        else if(b<a && b>c || b<c && b>a)
        {
            s=b;
        }
        else
        {
            s=c;
        }
        cout<<"Case "<<i<<": "<<s<<endl;
    }
    return 0;
}
