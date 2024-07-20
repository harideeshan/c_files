#include <stdio.h>

int main()
{
    int grade;
    printf("your score out of 100:\n");
    scanf("%d",&grade);
    if (grade >= 40){
        printf("you're passed");
    }
    else{
        printf("you're failed");
    }
    
}