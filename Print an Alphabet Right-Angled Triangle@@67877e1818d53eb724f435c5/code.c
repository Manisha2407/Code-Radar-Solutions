#include <stdio.h>
int main(){
    int n,i,j;
    char a='A';
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c",a++);
        }
        printf("\n");
    }
    return 0;
}