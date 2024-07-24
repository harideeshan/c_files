#include <stdio.h>

int main(){
    int day,month,year;
    printf("enter the date:\n");
    scanf("%d", &day);
    printf("enter the month:\n");
    scanf("%d", &month);
    printf("enter the year:\n");
    scanf("%d", &year);

    printf("day: 0x%X \n", day);
    printf("day: 0x%X \n", month);
    printf("day: 0x%X \n", year);
}