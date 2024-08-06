#include <stdio.h>

int main()
{
    int num;
    int i, j;
    printf("Enter the value of num:\n");
    scanf("%d", &num);

    printf("Increment\n");
    for(int i = 1;i <= num;i++){
        printf("%d ", i);
    }
    printf("\n");

    printf("Decrement\n");
    for(int j = num; j>= 1;j--){
        printf("%d ", j);
    }
}