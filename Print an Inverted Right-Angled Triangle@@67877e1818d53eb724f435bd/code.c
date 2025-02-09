#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n; i>=1 ;i-- ){
        for (int j=1 ; j<=i ; j++ ){
            printf("* ");//this extra space is becausse of the result needed a extra space in between
        }
        printf("\n");
    }
    return 0;
}