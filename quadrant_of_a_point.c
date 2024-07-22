#include <stdio.h>

int main(){
    float x, y;
    printf("enter two values:\n");
    scanf("%f%f", &x, &y);

    if ((x > 0) && (y >0)){
        printf("the point %.2f, %.2f is at QUADRANT 1\n",x , y);
    }
    else if ((x < 0) && (y > 0)){
        printf("the point %.2f, %.2f is at QUADRANT 2\n", x, y);
    }
     else if ((x < 0) && (y < 0)){
        printf("the point %.2f, %.2f is at QUADRANT 3\n", x, y);
    }
     else if ((x > 0) && (y < 0)){
        printf("the point %.2f, %.2f is at QUADRANT 4\n",x, y);
    }
}