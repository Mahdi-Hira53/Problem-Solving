#include<stdio.h>
int main()
{
    long long int n, i,  fact = 1;
    scanf("%lld",&n);


    for(i=1; i <= n ; i++)

    fact = fact * i;
   
    printf("%lld\n",fact);

    return 0;
}