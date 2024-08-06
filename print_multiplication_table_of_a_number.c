#include <stdio.h>

int main(){
    int num;
    int multiply;
    printf("enter the value of a number:\n");
    scanf("%d", &num);

    for(int i = 1;i <= 10;i++){
        multiply = num * i;
        printf("%d * %d = %d\n", num, i, multiply);
    }
    
}