#include <stdio.h>
int main()
{
    float i, j;
    i = 0;
    while (i <= 15)
    {
        i = i + 1;
        j = i / 2;
        printf("%f divided by 2 is equal to %.1f\n", i, j);
    }
    getchar(); // wait here
    return 0;
}