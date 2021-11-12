#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>


int main(void)
{
    int month = get_int("Ведіть число: ");
    if ( month >= 1 && month <= 12)
    {
        if ((month == 1) || (month == 2) || (month == 12))
        {
            printf("Зима\n");
        }
        if ((month >= 3) && (month <= 5))
        {
            printf("Весна\n");
        }
        if ((month >= 6) && (month <= 8))
        {
            printf("Літо\n");
        }
        if ((month >= 9) && (month <= 11))
        {
            printf("Осінь\n");
        }
    }
    else
    {
        printf("Число повинне бути від 1 до 12\n");
    }
}