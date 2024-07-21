#include <stdio.h>

int main(){
    char symbol;
    int a,b;
    printf("enter the operation to done(+, _, *, /,%%):\n");
    scanf("%c",&symbol);
    printf("enter two numbers:\n");
    scanf("%d%d",&a ,&b);

    switch (symbol){
        case '+':
            printf("result of addition is :%d\n", (a+b));
            break;
        case '-':
            printf("result of subtraction is :%d\n", (a-b));
            break;
        case '*':
            printf("result of multiplication is :%d\n", (a*b));
            break;
        case '/':
            printf("result of division is :%d\n", (a/b));
            break;
        case '%':
            printf("result of remainder is :%d\n", (a%b));
            break;
        default:
            printf("error...Try Again");
            break;
    }
    









}