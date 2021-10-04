#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=1;
    char a[100];
    cin>>n;
    cin>>a;
    for(int i=0; i<n; i++)
        a[i]=tolower(a[i]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                // count++;
            }
        }
    }
    for(int i=0; i<n-1; i++)
    {
        if(a[i]!=a[i+1])
            count++;
    }
    if(count==26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
