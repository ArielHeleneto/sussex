#include <stdio.h>
#include <stdlib.h>
int main() {
    unsigned int n, sum = 0, pro = 1;
    scanf( "%ud", &n );
    for ( int i = 1; i <= n; i++ ) {
        sum += i;
        pro *= i;
    }
    printf( "sum=%d,product=%d", sum, pro );
    return 0;
}