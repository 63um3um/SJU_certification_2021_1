#include<stdio.h>

int main(void)
{
    double avg;
    int sum = 0;
    int n;
    int i;
    int under_40 = 0;
    int min = 101;

    for(i=0; i<5; i++)
    {
        scanf("%d",&n);
        if(!(n <= 100 && n>=0))
        {
            printf("Invalild");
            return 0;
        }
        if(n < min)
        {
            min = n;
        }
        if(n < 40)
        {
            under_40++;
        }
        sum += n;
    }

    avg = sum/5.0;

    if(under_40 >= 3)
    {
        avg = 0;
    }
    if(avg >= 90 )
    {
        printf("A+\n");
    }
    else if (avg >= 75)
    {
        printf("A\n");
    }
    else if (avg >= 65)
    {
        printf("B+\n");
    }
    else if(avg >= 50 )
    {
        printf("B\n");
    }
    else
    {
        printf("F\n");
    }

    printf("avg=%.2lf min=%d",avg,min);

    return 0;

}
