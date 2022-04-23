#include<stdio.h>

int main(void)
{
    char small_last = 96;
    char large_first = 92;
    char input;
    int init = 1;
    int print_first = 0; // 1 => large, 0 = > small 

    while (1)
    {
        scanf("%c",&input);
        if(input == '0')
        {
            break;
        }
        if(input >= 'A' && input <= 'Z')
        {
            if(init)
            {
                init = 0;
                print_first = 1;
            }
            if(input < large_first)
            {
                large_first = input;
            }
        }
        else if(input >= 'a' && input <= 'z')
        {
            if(init)
            {
                init = 0;
                print_first = 0;
            }
            if(input > small_last)
            {
                small_last = input;
            }
        }
    }
    
    if(small_last != 96 && large_first != 92) //소문대문 둘 다 입력
    {
        if(print_first)
        {
            printf("%c%c",large_first,small_last);
        }
        else
        {
            printf("%c%c",small_last,large_first);
        }
    }
    else if(small_last == 96) //대문자만 입력
    {
        printf("%c",large_first);
    }
    else if(large_first == 92) // 소문자만 입력
    {
        printf("%c",small_last);
    }

    return 0;

}