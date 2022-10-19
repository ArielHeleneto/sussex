#include <stdio.h>
int main(){
    int a[1000]={0},n=0;
    double aver=0,ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        aver+=a[i];
    }
    aver/=n;
    for(int i=0;i<n;i++){
        ans+=(a[i]-aver)*(a[i]-aver);
    }
    printf("%f",ans/n);
    return 0;
}