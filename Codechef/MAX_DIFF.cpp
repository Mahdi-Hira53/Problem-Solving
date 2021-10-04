#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {

        ll n,s,k;
        cin >> n >> s;
        if(n==s || n>s)
            cout << s << endl;
        else
        {
            k = s-n;
            cout << abs(n-k) << endl;
        }


    }

}
