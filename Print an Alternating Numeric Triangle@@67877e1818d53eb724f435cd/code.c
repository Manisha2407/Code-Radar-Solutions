#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<=i;j++){
            printf("%d ",(i+j)%2);
        }
        printf("\n");
    }
    return 0;
}
