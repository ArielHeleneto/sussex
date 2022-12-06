#include <stdio.h>
#include <stdlib.h>
int main() {
    int n1, a1[100] = { 0 }, n2, a2[100] = { 0 };
    printf( "Input length of Vector A (1 integer number expected):" );
    scanf( "%d", &n1 );
    printf( "Input Vector A (%d integer number(s) expected):", n1 );
    for ( int i = 0; i < n1; i++ ) {
        scanf( "%d", &a1[i] );
    }
    printf( "Input length of Vector B (1 integer number expected):" );
    scanf( "%d", &n2 );
    printf( "Input Vector B (%d integer number(s) expected):", n2 );
    for ( int i = 0; i < n2; i++ ) {
        scanf( "%d", &a2[i] );
    }
    if ( n1 != n2 ) {
        printf( "Length of Vector A (%d) is not equal to length of Vector B (%d).\n", n1, n2 );
    }
    else {
        for ( int i = 0; i < n2; i++ ) {
            printf( "%d ", a1[i] * a2[i] );
        }
    }
    return 0;
}