#include<stdio.h>
#include<limits.h>

int main(void)
{
    int n;
    int z;
    int i, j;
    int is_prime;
    int prime_len = 0;
    int max_len = 0;
    int prime_last = 1;
    int prime_last_tmp = 1;

    int max = INT_MIN;
    int min = INT_MAX;

    
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&z);

        if(z >= 2)
        {
            is_prime = 1;
            for(j=2; j<=(z+1)/2; j++)
            {
                if(z%j == 0)
                {
                    is_prime = 0;
                    break;
                }
            }
            if(z >= 100)
            {
                is_prime = 0;
            }
            if(is_prime)
            {
                prime_last_tmp = z;
                prime_len++;
            }
            else
            {
                if(max_len < prime_len)
                {
                    max_len = prime_len;
                    prime_last = prime_last_tmp;
                }
                prime_len = 0;
            }
        }

        if(z > max)
        {
            max = z;
        }
        if(z < min)
        {
            min = z;
        }

    }
    
    if(max_len < prime_len)
    {
        max_len = prime_len;
        prime_last = prime_last_tmp;
    }

    if(prime_last_tmp == 1)
    {
        printf("0");
    }
    else
    {
        printf("%d\n%d\n%d %d",max_len, prime_last, max, min);
    }

    return 0;

}