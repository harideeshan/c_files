#include <stdio.h>

int main(){
    int a,b,c;
    printf("enter a,b,c:\n");
    scanf("%d%d%d", &a, &b, &c);

    if ((a%b == 0 || b%a == 0) && (b%c== 0 ||c%b==0) && (a%c == 0)|| (c %a == 0)){
        printf("divisible numbers!\n");
    }
    else{
        printf("Non divisible numbers");
    }

}