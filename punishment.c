#include <stdio.h>

int main(){
    int num;
    int digit = 0;//adding this to know that we got the desired output

    //gettiing the input from the user how many times the punishment want to be printed
    printf("enter the number of times you want to write the punishment:\n");
    scanf("%d", &num);

    //Initialising the loop statement to do work
    for(int i = 0;i < num;i++){
        digit++;
        printf("%d.Iam sorry for not listening to my teacher\n", digit);
    }
}