#include <stdio.h>
int main(){
    char a[6];
    scanf("%s",a);
    for(int i=4;i>=0;i--){
        printf("%c",a[i]);
    }
    printf("\n");
    return 0;
}