#include<stdio.h>

int main(void)
{
    int n;
    int i, j;
    int ex;
    int tmp;

    int factor_max=0, max_n = 0;
    int factor_min=33, min_n = 210000000;
    int factor_cnt = 0;

    while (1)
    {
        scanf("%d",&n);
        if(n <= 1)
        {
            break;
        }
        tmp = n;
        factor_cnt = 0;
        for(i=2; i<=(n+1)/2; i++)
        {
            ex = 0;
            if(tmp%i == 0)
            {
                factor_cnt++;
                while (tmp%i == 0)
                {
                    tmp /= i;
                    ex ++;
                }
                
                printf("%d %d ",i,ex);
            }
        }
        if(factor_max < factor_cnt)
        {
            factor_max = factor_cnt;
            max_n = n;
        }
        else if(factor_max == factor_cnt)
        {
            if(n < max_n)
            {
                max_n = n;
            }
        }

        if(factor_min > factor_cnt)
        {
            factor_min = factor_cnt;
            min_n = n;
        }
        else if(factor_min == factor_cnt)
        {
            if(min_n < n)
            {
                min_n = n;
            }
        }
        printf("\n");
    }

    printf("%d %d",max_n,min_n);

    return 0;
}