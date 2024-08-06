#include <stdio.h>

int main(){
    int num;
    int sum = 0;
    printf("enter the value of num:\n");
    scanf("%d", &num);

    for(int i = 1;i<= num;i++){
        sum = sum + i;
    }
    printf("sum of all numbers from 1 to %d is = %d", num, sum);
}