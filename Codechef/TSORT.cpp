#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    int a[t+5];
    for(int i=0;i<t;i++)
        cin>>a[i];

    sort(a,a+t);

    for(int i=0;i<t;i++)
         cout<<a[i]<<endl;

}
