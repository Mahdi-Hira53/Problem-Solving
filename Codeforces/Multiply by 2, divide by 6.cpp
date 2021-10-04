
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        while(1)
        {
            if(n==1)
            {
                cout<<c<<endl;
                break;
            }
            if(n<0)
            {
                cout<<"-1"<<endl;
                break;
            }
            c++;
            if(n%6==0)
                n/=6;
            else
                n*=2;

        }

    }

    return 0;
}
