#include<stdio.h>
int main()
{
    int n,m,rem,i,sum_1,sum_2;
    scanf("%d",&n);
    sum_1=0;
    sum_2=0;
    for (m=n, i=1;m!=0;m=m/10, i++)
    {
        rem=m%10;
        if(i%2!=0)
            sum_1+=rem;
        else
            sum_2+=rem;
    }
    printf("%d\n",sum_1*sum_2);
    return 0;
}