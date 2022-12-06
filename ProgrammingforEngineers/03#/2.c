#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
    double a, b;
    scanf( "%lf%lf", &a, &b );
    printf( "%lf",atan( pow( a, b ) ) );
    return 0;
}