#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count1=0,count2=0;
    cin>>n;
    char a[n+5];
    cin>>a;
    for(int i=0; i<n; i++)
    {
        a[i]=toupper(a[i]);
        if(a[i]=='A')
            count1++;
        if(a[i]=='D')
            count2++;
    }
    if(count1>count2)
        cout<<"Anton"<<endl;
    else if(count1<count2)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;
    //cout<<count1<<endl;
    //cout<<count1<<endl;
    return 0;
}
