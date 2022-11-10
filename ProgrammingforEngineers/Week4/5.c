#include <stdio.h>
#include <stdlib.h>
int main() {
    // Vector Check
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
        printf( "Vector A and Vector B are not same: length of Vector A (%d) is not equal to length of Vector B (%d).\n", n1, n2 );
    }
    else {
        int i = 0;
        while ( a1[i] == a2[i] && i < n1 ) {
            i++;
        }
        if ( i != n1 ) {
            printf( "Vector A and Vector B are not same: number of Vector A (%d) is not equal to number of Vector B (%d) at position %d.\n", a1[i], a2[i], i );
        }
        else {
            printf( "Vector A and Vector B are same.\n" );
        }
    }

    // Matrix Check
    int m1, b1[100][100] = { 0 }, m2, b2[100][100] = { 0 };
    printf( "Input rows and columns of Matrix A (2 integer numbers expected):" );
    scanf( "%d%d", &m1, &n1 );
    printf( "Input Matrix A (%d integer number(s) expected):", m1 * n1 );
    for ( int i = 0; i < m1; i++ ) {
        for ( int j = 0; j < n1; j++ ) {
            scanf( "%d", &b1[i][j] );
        }
    }
    printf( "Input rows and columns of Matrix A (2 integer numbers expected):" );
    scanf( "%d%d", &m2, &n2 );
    printf( "Input Matrix B (%d integer number(s) expected):", m2 * n2 );
    for ( int i = 0; i < m2; i++ ) {
        for ( int j = 0; j < n2; j++ ) {
            scanf( "%d", &b2[i][j] );
        }
    }
    if ( m1 != m2 ) {
        printf( "Matrix A and Matrix B are not same: rows of Vector A (%d) is not equal to rows of Vector B (%d).\n", m1, m2 );
    }
    else if ( n1 != n2 ) {
        printf( "Matrix A and Matrix B are not same: columns of Vector A (%d) is not equal to columns of Vector B (%d).\n", n1, n2 );
    }
    else {
        short res = 1;
        for ( int i = 0; i < m1; i++ ) {
            for ( int j = 0; j < n1; j++ ) {
                if ( b1[i][j] != b2[i][j] ) {
                    printf( "Matrix A and Matrix B are not same: number of Matrix A (%d) is not equal to number of Matrix B (%d) at position (%d,%d).\n", b1[i][j], b2[i][j], i, j );
                    res = 0;
                    break;
                }
            }
        }
        if ( res ) {
            printf( "Matrix A and Matrix B are same.\n" );
        }
    }
    return 0;
}