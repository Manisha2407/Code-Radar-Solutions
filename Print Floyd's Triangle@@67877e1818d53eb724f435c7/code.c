#include <stdio.h>
int main(){
    int n,i,j,count=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}