#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,sum,flag=0;
        cin>>a>>b>>c;

        sum=a+b+c;
        if(sum==180 && a!=0 && b!=0 && c!=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
