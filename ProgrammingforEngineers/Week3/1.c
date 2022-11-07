#include <stdio.h>
#include <stdlib.h>
int main() {
    char a[100];
    int money;
    fgets( a, 99, stdin );
    money = atoi( a );
    if ( money < 0 ) {
        printf( "Input Error." );
    }
    else if ( money <= 20000 ) {
        printf( "Low,tax=0" );
    }
    else if ( money <= 100000 ) {
        printf( "Lower-middle,tax=%f", money * 0.1 - 2000 );
    }
    else if ( money <= 200000 ) {
        printf( "Upper-middle,tax=%f", money * 0.2 - 20000 );
        
    }
    else {
        printf( "High,tax=%f", money * 0.3 - 40000 );
    }
    return 0;
}