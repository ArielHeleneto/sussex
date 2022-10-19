#include <stdio.h>
#define M_PI 3.1415
int main(){
    int i=0;
    while(i<=98){
        printf("%d%c",i+=2," \n"[i==98]);
    }
    for(i=1;i<=99;i+=2){
        printf("%d%c",i," \n"[i==99]);
    }
    return 0;
}