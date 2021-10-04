#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c1=0,c2=0,c3=0,c4=0;
        cin>>n;
        int a[n+5],b[n+5];


        for(int i=1;i<=n;i++)
        {
            cin>>a[i];

            if(i%2==0)  //even of index
                c1++;
            if(i%2!=0) //odd of index
                c2++;
            if(a[i]%2==0) //even of array
                c3++;
            if(a[i]%2!=0) //odd of array
                c4++;


        }

        cout<<min(c1,c4)+min(c2,c3)<<endl;



    }


}

