#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf( "%d", &n );
    switch ( n & 1 ) {
        case 1:
            printf( "ODD" );
            break;
        case 0:
            printf( "EVEN" );
            break;
    }
    return 0;
}