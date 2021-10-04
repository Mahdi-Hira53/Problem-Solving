#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        long long a[n+5];
        for(int i=0; i<n; ++i)
        {
            cin>>a[i];
        }
        int sum=a[0];
        for(int i=1; i<n; ++i)
        {
            sum &= a[i];
        }

        cout<<sum<<endl;


    }

}
