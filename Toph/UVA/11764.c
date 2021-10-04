#include<stdio.h>

int main()
{
    int t, n,h[60], i, j, k, hj, lj;

    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d",&n);
            hj=0;
            lj=0;

            for(j=1; j<=n; j++)
                scanf("%d",&h[j]);

            for(k=1; k<n; k++)
            {
                if(h[k+1]>h[k])
                    hj++;
                else if(h[k+1]<h[k])
                    lj++;
                else
                    continue;
            }
            printf("Case %d: %d %d\n",i,hj,lj);
        }
    }
    return 0;
}
