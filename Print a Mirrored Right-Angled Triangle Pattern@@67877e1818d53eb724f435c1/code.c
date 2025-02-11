#include <stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for (j=1;j<=i-1;j++){//firstly i have written(j=n-1;j>=1;j--) but is se spaces kam nhi ho rhi thi
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
return 0;
}