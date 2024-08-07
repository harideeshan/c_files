#include <stdio.h>

int main()
{
    int i, j, k;
    int blankspace;
    int n;
    int currentvalue = 1;

    printf("Insert 'n' (number of rows):\n");
    scanf("%d", &n);
    blankspace = n - 1;

    for (i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (k = blankspace; k >= 1; k--)
        {
            printf(" ");
        }
        // Print increasing sequence of numbers
        for (j = 1; j <= i; j++)
        {
            printf("%d ", currentvalue);
            currentvalue++;
        }
        printf("\n");
        blankspace--;
    }

    return 0;
}

