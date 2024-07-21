/*this program prints o if the number is equal to 0 
1 if the number entered is positive
-1 if the number entered is negative*/



#include <stdio.h>

int main(){
    int num;
    printf("enter the number:\n");
    scanf("%d", &num);

    if (num > 0){
        printf("1");
    }
    else if (num == 0){
        printf("0");
    }
    else{
        printf("-1");
    }
}