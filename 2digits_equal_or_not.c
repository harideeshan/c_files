#include <stdio.h>

int main(){
    int a,b;
    printf("enter two digits:\n");
    scanf("%d%d", &a, &b);

    if (a == b){
        printf("EQUAL");
    }
    else{
        printf("NOT EQUAL");
    }
}