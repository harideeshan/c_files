#include <stdio.h>

int main(){
int a,b,max;

printf("enter two numbers:\n");
scanf("%d%d", &a, &b);
max =(a > b)?a:b;
printf("the max value is %d\n", max);


}