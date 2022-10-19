#include <stdio.h>
int main(){
    int a[9]={0};
    for(int i=0;i<8;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<8;i++){
        printf("%s ",a[i]&1?"odd":"even");
    }
    return 0;
}