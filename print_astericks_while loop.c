#include <stdio.h>

int main(){
    int count;
    printf("Enter the count of astericks:\n");
    scanf("%d",&count);
    int loop = 1;
    while (loop < count + 1 ){
        printf("*\n");
        loop += 1;
    }
}