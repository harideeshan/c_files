#include <stdio.h>

int main(){
    int num1, num2;
    printf("enter two numbers:\n");
    scanf("%d%d", &num1, &num2);

    if (num1 == num2){
        printf("TRUE\n");
    }
    else{
        printf("FALSE\n");
    }
}