#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        int a,b;
        a=s[0]-'0';
        b=s[s.size()-1]-'0';

        cout<<a+b<<endl;
    }
}
