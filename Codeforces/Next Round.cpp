#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,n,k,count=0, arr[1000];
    cin>>n>>k;

    for(int i=1; i<=n; i++)
    {
        cin>>a;
        arr[i]=a;
    }
    for(int j=1; j<=n; j++)
    {
        if(arr[k]<=arr[j] && arr[j]>0)
        {
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}
