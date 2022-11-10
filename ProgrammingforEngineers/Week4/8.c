#include <stdio.h>
#include <stdlib.h>
int main() {
    int count = 0;
    for ( int i = 2; i <= 200; i += 5 ) {
        count++;
        printf( "%d ", i );
    }
    printf( "\ncount=%d", count );
    return 0;
}