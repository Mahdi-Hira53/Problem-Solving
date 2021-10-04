#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,c;
    cin>>m>>n;
    if((m*n)%2!=0)
    {
        c=m*n-1;
        cout<<(c/2);
    }
    else
    {
        cout<<(m*n)/2;
    }

    return 0;
}
