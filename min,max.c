#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter three digits:\n");
    scanf("%d%d%d", &a, &b, &c);

    if ((a > b) && (b > c))
    {
        printf("max : %d\n", a);
        printf("min:%d\n", c);
    }
    else if ((a > c) && (c > b))
    {
        printf("max : %d\n", a);
        printf("min:%d\n", b);
    }
    else if ((b > c) && (c > a))
    {
        printf("max : %d\n", b);
        printf("min:%d\n", a);
    }
    else if ((b > a) && (a > c))
    {
        printf("max : %d\n", b);
        printf("min:%d\n", c);
    }
    else if ((c > a) && (a > b))
    {
        printf("max : %d\n", c);
        printf("min:%d\n", b);
    }
    else if ((c > b) && (b > a))
    {
        printf("max : %d\n", c);
        printf("min:%d\n", a);
    }
    return 0;
}
