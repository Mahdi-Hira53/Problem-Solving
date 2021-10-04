#include<bits/stdc++.h>
using namespace std;
#define ll long long
//vector < ll > primes;

int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        ll N;
        cin>>N;
        bool prime[N];

        for(int i = 2; i <= N; i++)
            prime[i] = true;

        for(int i = 4; i <= N; i += 2)
            prime[i] = false;

        for(int i = 3; i <= N ; i +=2)
        {
            if(prime[i])
            {
                for(int j = i * i; j <= N; j += i * 2)
                    prime[j] = false;
            }
        }

        /*for(int i = 2; i <= N; i++)
        {
            if(prime[i])
                primes.push_back(i);
        }*/
        for(int i=1; i<=N; i++)
        {
            if(prime[i])
                if((i<=N)&&((i*2)>N))
                {
                    cout<<i<<endl;
                    break;
                }
        }


    }

    return 0;

}
