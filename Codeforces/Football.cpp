#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len,cnt=0;
    string s;
    cin>>s;
    len=s.size();
    for (int i=0; i<len; i++)
    {
        if (s[i]=='0' && s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='0' && s[i+4]=='0' && s[i+5]=='0' && s[i+6]=='0')
        {
            cnt=7;
            break;
        }
        if (s[i]=='1' && s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='1' && s[i+4]=='1' && s[i+5]=='1' && s[i+6]=='1')
        {
            cnt=7;
            break;
        }
    }
    if (cnt==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;

}
