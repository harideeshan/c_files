#include <stdio.h>

int main(){
    int total, totalsum;
    do{
        printf("Enter the amount:\n");
        scanf("%d", &total);
        totalsum = total + totalsum;
    }
    while(total != 0);


    printf("the total price is %d\n", totalsum);
    return 0;
} 