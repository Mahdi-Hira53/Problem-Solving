#include <stdio.h>
#include <math.h>

int main()
{
    int a,rem,sum=0;

    scanf("%d",&a);


    for(int i=abs(a); i>0; i/=10)
    {
        rem=i%10;
        sum+=rem;
    }
    printf("%d\n",sum);

    return 0;
}