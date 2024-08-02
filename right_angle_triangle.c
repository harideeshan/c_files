#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of 'n'\n");
    scanf("%d", &n);

    for(int i = 1;i <= n;i++){
        for(int j=1;j <= i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/*Outer Loop:
for(int i = 1; i <= n; i++) is a loop that runs from 1 to n. Each time this loop runs,
 it represents a row in our triangle.

Inner Loop:
for(int j = 1; j <= i; j++) is another loop that runs from 1 to i. 
This loop decides how many stars (*) will be printed in each row.*/