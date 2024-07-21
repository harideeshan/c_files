#include <stdio.h>

int main()
{
    int num;
    printf("enter the number:\n");
    scanf("%d", &num);

    if ((num >= 10) || (num >= 99))
    {
        printf("DOUBLE DIGIT");
    }
    else if ((num >= 100) || (num <= 999))
    {
        printf("TRIPLE DIGIT");
    }
    else
    {
        printf("This number neither double digit or triple digit");
    }
    return 0;
}