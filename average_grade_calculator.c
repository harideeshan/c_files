#include <stdio.h>

int main()
{
    int grade;
    int totalgrade = 0, totalsum = 0;
    printf("enter your grades and -1to STOP:\n");
    scanf("%d", &grade);

    while (grade != -1)
    {
        totalsum = totalsum + grade;
        totalgrade++;
        printf("enter your grades and -1to STOP:\n");
        scanf("%d", &grade);
    }

    printf("Your average grade is %.2f", (float)totalsum / totalgrade);
    return 0;
}