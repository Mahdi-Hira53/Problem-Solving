#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,t;
    cin>>a>>b>>c;
    t=a*a+b*b;
    if(t<c*c)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}

