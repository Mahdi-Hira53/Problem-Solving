#include<bits/stdc++.h>
using namespace std;
const int N=1e8;
vector < int > primes;

int main()
{

    bool prime[N];

    for(int i = 2; i <= N; i++)
        prime[i] = true;

    for(int i = 4; i <= N; i += 2)
        prime[i] = false;

    for(int i = 2; i*i <= N ; i ++)
    {
        if(prime[i])
        {
            for(int j = i * i; j <= N; j += i * 2)
                prime[j] = false;
        }
    }

    for(int i = 2; i <= N; i++)
    {
        if(prime[i])
            primes.push_back(i);
    }

    for(int i=1; i<primes.size(); i+=100)
        cout<<primes[i-1]<<endl;

return 0;
}