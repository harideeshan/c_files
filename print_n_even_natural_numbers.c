#include <stdio.h>

int main(){
    int num;
    printf("Enter the value of num:\n");
    scanf("%d", &num);

    for(int i =1;i <= num;i++){
        printf("%d ", i * 2);
    }
}