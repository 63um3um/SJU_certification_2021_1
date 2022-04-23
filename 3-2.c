#include<stdio.h>

int main(void)
{
    int n;
    int i, j;
    int m;
    int tmp;
    int digit_sum;
    int m_rev;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&m);
        tmp = m;
        digit_sum = 0;
        m_rev = 0;
        while (tmp)
        {
            digit_sum += tmp%10;
            m_rev *= 10;
            m_rev += tmp%10;
            tmp /= 10;
        }
        printf("%d %d %d %d\n",m,digit_sum,m_rev,m_rev%13);
    }

    return 0;

}