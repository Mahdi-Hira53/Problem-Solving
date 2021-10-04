#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc; cin >> tc;
    while(tc--)
    {
        int n,c=0;
        cin >>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
                c++;
        }

        if (c%2!=0)
            cout << "Alice"<<endl;
        else
            cout << "Bob"<<endl;
    }

    return 0;
}
