#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    string s;
    for(; n--;)
    {
        cin>>s;
        if(s[1]!='+')
        {
            --x;
        }
        else if(s[1]=='+')
        {
            ++x;
        }
    }
    cout<<x<<endl;
    return 0;
}


