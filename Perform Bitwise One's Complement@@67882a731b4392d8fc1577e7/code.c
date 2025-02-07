#include <stdio.h>
int main(){
    //-(num + 1) because C stores negative numbers in two’s complement form.
    //complement sign is ~
    //5 in binary: 00000101, applying ~ gives 11111010, which is -6 in two’s complement.
    int a,b;
    scanf("%d",&a);
    b=~a;
    printf("%d",b);
    return 0;
}