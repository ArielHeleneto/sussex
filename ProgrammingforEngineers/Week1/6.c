#include <stdio.h>
#define M_PI 3.1415
int main(){
    float s;
    scanf("%f",&s);
    s=s/2;
    printf("%.2f",4*M_PI*s*s*s/3);
    return 0;
}