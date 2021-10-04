/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    int a[n];
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            v.push_back(a[i]);
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]%3==0 || v[i]%5==0)
            cnt++;
    }
    if(cnt==v.size())
        cout<<"APPROVED"<<endl;
    else
        cout<<"DENIED"<<endl;

    return 0;

}
*/
/*
#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    bool isPrime = true;

    for(int i = 2; i <= n / 2; ++i)
    {
        if(n % i == 0)
        {
            isPrime = false;
            //break;
        }
    }
    return isPrime;
}

int next(int n)
{
    if(n==2)
        return 2;
    int prime = n;
    bool f=false;
    while(!f)
    {
        prime++;
        if(isprime(prime))
            f=true;
    }
    return prime;
}

int main()
{
    int n;
    cin>>n;
    cout<<next(n)<<endl;

    return 0;
}*/
