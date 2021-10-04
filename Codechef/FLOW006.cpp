#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,temp,sum;
        cin>>n;
        sum=0;

        while(n!=0)
        {
            temp=n%10;
            sum+=temp;
            n/=10;
        }

        cout<<sum<<endl;
    }
}
