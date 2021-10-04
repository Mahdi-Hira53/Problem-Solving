#include <stdio.h>

int main()
{
    int n;
    printf("PERFECTION OUTPUT\n");

    while(~scanf("%d", &n) && n)
    {
        int sum = 1, j;
        for(j = 2; j<=n/2; j++)
        {
            if(n%j == 0)
                sum += j;
        }

        printf("%5d  ",n);

        if(sum < n || n==1)
            printf("DEFICIENT\n");
        else if(sum == n)
            printf("PERFECT\n");
        else
            printf("ABUNDANT\n");
    }
    printf("END OF OUTPUT\n");

    return 0;
}
