#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin >> n;
    long long int a[n];

    for(int i=0; i<n-1; i++)
        cin >> a[i];

    sort(a,a+n);

    for(int i=0; i<n; i++)
    {
        if(a[i]==i+1)
            continue;
        else
        {
            cout <<i+1;
            break;
        }
    }

    return 0;
}
