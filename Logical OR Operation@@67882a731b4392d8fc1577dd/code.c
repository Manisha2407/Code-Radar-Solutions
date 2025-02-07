#include <stdio.h>
// the operator here used is or if one of the statement is true the result will be true
int main(){
    int a,b;
    scanf("%d%d",&a ,&b);
    if(a>0 || b>0){
    printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}