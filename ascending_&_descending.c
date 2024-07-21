#include <stdio.h>

int main(){
    int num,units,tens,hundreds;
    printf("enter the three digit number:\n");
    scanf("%d", &num);
    units = num %10;
    tens = (num / 10) % 10;
    hundreds = (num / 100);

    if ((hundreds < tens) && (tens < units)){
        printf("ASCENDING\n");
    }
    else{
        printf("DESCENDING\n");
    }
}