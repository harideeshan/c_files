#include <stdio.h>

int main()
{
    float distance, speed;
    int hour, minutes;
    float time;

    printf("what is the distance between the distance a and b:\n");
    scanf("%f",&distance);
    printf("what is the speed you travel:\n");
    scanf("%f",&speed);
    time = distance / speed;

    hour = (int)time;
    minutes = (int)((time - hour)* 60);

    printf("it takes %d hour and %d minutes\n",hour, minutes);

}