#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        char a='A';
        for(j=1;j<=i;j++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
        }
        return 0;
    }
