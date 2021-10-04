#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum,n,a,b,item;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>b;
        if(a%2==0)
        {
            item=a+1;
        }
        else
        {
            item=a;
        }
        sum=0;
        for(int i= item; i<=b; i+=2)
        {
            sum=sum+i;

        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
    return 0;
}
