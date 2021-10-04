#include<stdio.h>
int main()
{
    int x,y,n;
    scanf("%d %d %d",&x,&y,&n);
    for(int i=1;i<=n;i++)
    {

        if(i%x==0&&i%y!=0)
            printf("Fizz\n");
        if(i%x!=0&&i%y==0)
            printf("Buzz\n");
        if(i%x==0&&i%y==0)
            printf("FizzBuzz\n");
        if(i%x!=0&&i%y!=0)
            printf("%d\n",i);

    }
    return 0;

}
