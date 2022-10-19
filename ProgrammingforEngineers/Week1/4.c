#include <stdio.h>
int main(){
    float sum=0,pro=1;
    for(int i=1;i<=3;i++){
        float input;
        scanf("%f",&input);
        sum+=input;
        pro*=input;
    }
    printf("%.2f %.2f",sum,pro);
    return 0;
}