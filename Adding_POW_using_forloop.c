#include <stdio.h>

int main(){
    int num,power;
    int i;
    int result = 1;

    printf("enter the number:\n");
    scanf("%d", &num);

    printf("enter the power:\n");
    scanf("%d", &power);

    for (i= 1; i<= power; i++){
        result = result * num;
    }
    printf("%d in the power of %d is %d\n", num, power, result);
}