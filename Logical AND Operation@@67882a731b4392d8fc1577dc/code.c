#include <stdio.h>
int main(){
    //&& this is and oprator it will return true if both the statements are true otherwise return false
    int a,b;
    scanf("%d%d",&a ,&b);
    if(a>0 && b>0){
        printf("True");
    }
    else{
    printf("False");
    }
    return 0;
}