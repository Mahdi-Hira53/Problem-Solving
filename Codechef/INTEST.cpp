#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int a[n+5];
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++)
    {
        if(a[i]%k==0)
            count++;
    }

    cout<<count<<endl;


}
