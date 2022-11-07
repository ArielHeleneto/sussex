#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
    double a, b;
    scanf( "%lf%lf", &a, &b );
    if ( a > b && b > 0 ) {
        printf( "%lf", log( a ) + log10( b ) );
    }
    else if ( a < b ) {
        printf( "%lf", sin( a ) + cos( b ) );
    }
    return 0;
}