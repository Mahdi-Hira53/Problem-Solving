#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,v,t,count=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>p>>v>>t;
        if(p==1&&v==1)
        {
            count++;
        }
        else if(t==1&&v==1)
        {
            count++;
        }
        else if(p==1&&t==1)
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    cout<<count<<endl;
    return 0;

}
