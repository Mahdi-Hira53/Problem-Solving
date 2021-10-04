#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        /*string s;
        cin>>s;

        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='0'){
                cout<<s[i];

            }

        }
        cout<<endl;*/
        int n,rem,r=0;
        cin>>n;
        while (n != 0)
        {
            rem = n % 10;
            r = r * 10 + rem;
            n /= 10;
        }
        cout<<r<<endl;
    }
}
