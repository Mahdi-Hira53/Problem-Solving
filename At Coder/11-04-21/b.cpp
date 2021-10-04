#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    int flag = 0;

    cin >> s1;
    int len=s1.size();
    for(int i=0; i < len ; i++)
    {
        if(s1[i] != s1[len-i-1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
        cout <<"No" << endl;
    else
        cout <<"Yes" << endl;

    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int  main()
{
    string s,s1,s2;
    cin >> s;
    s1=s;
    reverse(s.begin(),s.end());
    if(s1==s)
        cout << "Yes";
    else
    {
        s2='0'+s1;
        string s3;
        s3=s2;
        reverse(s2.begin(),s2.end());
        if(s2==s3)
            cout << "Yes";
        else
            cout << "No";
    }
    return 0;
}
*/
