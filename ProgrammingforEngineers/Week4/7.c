#include <stdio.h>
#include <stdlib.h>
int main() {
    int m1, n1, a1[100][100] = { 0 }, m2, n2, a2[100][100] = { 0 };
    printf( "Input rows and columns of Matrix A (2 integer numbers expected):" );
    scanf( "%d%d", &m1, &n1 );
    printf( "Input Matrix A (%d integer number(s) expected):", m1 * n1 );
    for ( int i = 0; i < m1; i++ ) {
        for ( int j = 0; j < n1; j++ ) {
            scanf( "%d", &a1[i][j] );
        }
    }
    printf( "Input rows and columns of Matclearrix A (2 integer numbers expected):" );
    scanf( "%d%d", &m2, &n2 );
    printf( "Input Matrix B (%d integer number(s) expected):", m2 * n2 );
    for ( int i = 0; i < m2; i++ ) {
        for ( int j = 0; j < n2; j++ ) {
            scanf( "%d", &a2[i][j] );
        }
    }
    if ( n1 != m2 ) {
        printf( "Columns of Vector A (%d) is not equal to rows of Vector B (%d).\n", n1, m2 );
    }
    else {
        for ( int i = 0; i < m1; i++ ) {
            for ( int j = 0; j < n2; j++ ) {
                int res = 0;
                for ( int k = 0; k < n1; k++ ) {
                    res += a1[i][k] * a2[k][j];
                }
                printf( "%d ", res );
            }
            printf( "\n" );
        }
    }
    return 0;
}