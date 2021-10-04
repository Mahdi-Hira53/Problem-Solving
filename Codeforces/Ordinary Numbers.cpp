#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s1;
        cin>>s1;
        string s2;
        for(int i=0; i<s1.size(); i++)
            s2=s2+s1[0];
        int res;
        if(s1<s2)
            res=9*(s1.size()-1)+(s1[0]-49);
        else
            res=9*(s1.size()-1)+(s1[0]-48);

        cout<<res<<endl;

    }
    return 0;
}
