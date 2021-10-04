#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    char a[100];
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a[0]=='I')
            sum+=20;
        else if(a[0]=='T')
            sum+=4;
        else if(a[0]=='C')
            sum+=6;
        else if(a[0]=='O')
            sum+=8;
        else if(a[0]=='D')
            sum+=12;
    }


    cout<<sum<<endl;
    return 0;

}
