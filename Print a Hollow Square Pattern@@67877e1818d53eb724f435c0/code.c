#include <stdio.h>
int main(){
    int a,i,j;
    scanf("&d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            if(i==1||i==n-1||j==1||j==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}