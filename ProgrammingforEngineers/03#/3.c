#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
    int year;
    scanf( "%d", &year );
    printf( "%s", ( ( !( year % 4 ) && ( year % 100 ) ) || !( year % 400 ) ) ? "Yes" : "No" );
    return 0;
}