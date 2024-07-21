#include<stdio.h>
#include<math.h>

int main(){
    int num;
    printf("enter the number(positive or negative):\n");
    scanf("%d", &num);
    if (num < 0){
        printf("the absolute value of %d is |%d| \n", num, (-1*num));
    }
    else{
        printf("the absolute value of %d is %d\n", num, num);
    }
}