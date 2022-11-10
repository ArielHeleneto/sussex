#include <stdio.h>
#include <stdlib.h>
int main() {
    for ( char c = 'Z'; c >= 'A'; c-- ) {
        printf( "%c", c );
    }
    printf( "\n" );
    for ( char c = 'z'; c >= 'a'; c-- ) {
        printf( "%c", c );
    }
    return 0;
}