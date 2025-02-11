#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        char a='A';// to reset the alphabet to 'A' every time
        for(j=1;j<=i;j++){
            printf("%c ",a++);
        }
        printf("\n");
    }
    return 0;
}