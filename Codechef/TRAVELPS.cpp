#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c1=0,c2=0;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
                c1++;
            if(s[i]=='1')
                c2++;
        }

        cout<<(c1*a)+(c2*b)<<endl;
    }


}
