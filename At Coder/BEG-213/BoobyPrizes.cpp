#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+5],b[n+5];
    
    for(int i=0;i<n;i++)
        {
            cin >> a[i];
            b[i]=a[i];
        }

    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(b[i]==a[n-2])
            cout << i+1;
    }

    return 0;

}