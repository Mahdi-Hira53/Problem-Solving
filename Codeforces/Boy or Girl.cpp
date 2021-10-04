#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,count=0;

    string s;

    cin>>s;

    len=s.length();

    sort(s.begin(),s.end());

    for (int i = 0; i<len; i++)
    {
        if (s[i] != s[i +1] )

        {
            count++;
        }

    }
    if(count%2!=0)

    {
        cout<<"IGNORE HIM!";
    }

    else

    {
        cout<<"CHAT WITH HER!";
    }

    return 0;

}
