#include <stdio.h>

int main()
{
    int number, power, temppow;
    int result = 1;
    printf("Enter the number:\n");
    scanf("%d", &number);
    printf("Enter the power:\n");
    scanf("%d", &power);
    temppow = power;
    while (power > 0){
        result = result * number;
        power--;
    }
    printf("%d in the power of %d = %d\n", number,temppow,result);
}
