#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int m,n,p,q,sum1=0,sum2=0;
    cin>>m>>n;
    for(int i=1; i<m; i++)
        {
            if(m%i==0)
            {
                p=i;
                //cout<<p<<endl;
                sum1+=p;
            }
        }
        //cout<<sum1<<endl;

        for(int i=1; i<n; i++)
        {
            if(n%i==0)
            {
                q=i;
                //cout<<q<<endl;
                sum2+=q;
            }
        }
        //cout<<sum2<<endl;

        if((m==sum2)&&(n==sum1))
            cout<<"Friendship is ideal"<<endl;
        else
            cout<<"Friendship is not ideal"<<endl;
    }

    return 0;
}
