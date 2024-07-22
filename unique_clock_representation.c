// unique clock representation
#include <stdio.h>

int main()
{
    int totalseconds;
    int hours, minutes, seconds;
    printf("Enter the total number of seconds: \n");
    scanf("%d", &totalseconds);

    hours = (totalseconds / 3600);
    minutes = (totalseconds % 3600) / 60;
    seconds = (totalseconds % 60);

    if (hours < 10)
        printf("0");
    printf("%d :", hours);

    if (minutes < 10)
        printf("0");
    printf("%d: ", minutes);

    if (seconds < 10)
        printf("0");
    printf("%d: \n", seconds);
}