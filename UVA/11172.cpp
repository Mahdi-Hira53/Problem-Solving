#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a<b)
        {
            cout<<"<";
        }
        else if(a>b)
        {
            cout<<">";
        }
        else
        {
            cout<<"=";
        }
        cout<<endl;
    }
    return 0;
}
