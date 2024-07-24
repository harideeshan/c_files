#include <stdio.h>

int main(){
    char mycharacter;
    printf("Enter the character:\n");
    scanf("%c", &mycharacter);

    if ((mycharacter >= 'A') && (mycharacter <= 'Z')){
        printf("it is a capital letter\n");
    }
    else if((mycharacter >= 'a') && (mycharacter <= 'z')){
        printf("it is a small letter\n");
    }
    else if((mycharacter >= '0')&&(mycharacter <= '9')){
        printf("it is a digit\n");
    }
    else{
    printf("other...");
    }
}