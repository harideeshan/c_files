#include <stdio.h>

int main(){
    int a,b,c;
    printf("enter three values:\n");
    scanf("%d%d%d", &a, &b, &c);

    if ((a == b)&&(a==c)){
        printf("EQUAL");
    }
    else{
        printf("NOT EQUAL");
    }
}