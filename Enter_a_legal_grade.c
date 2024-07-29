#include <stdio.h>

int main()
{
    int grade, totalgrade = 0, totalsum = 0;

    do
    {
        printf("Enter your grade between 0 to 100 and '-1' to stop\n");
        scanf("%d", &grade);
        if ((grade >= 0) && (grade <= 100))
        {   
            printf("You've entered the legal grade.\n");
            totalsum = grade + totalsum;
            totalgrade++;
        }
    } 
    while ((grade >= 0) && (grade <= 100));
    printf("the math stopped\n");
    printf("Your average grade is %.2f\n",(float) totalsum / totalgrade);
    printf("\n");
}