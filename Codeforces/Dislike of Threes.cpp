#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >>k;
        int a[10005],j=0;
        vector<int>v;
        for(int i=1; i<=5000; i++)
        {
            if(i%3!=0 && i%10!=3)
                a[j++]=i;
        }
        cout << a[k-1] << endl;
    }

}
