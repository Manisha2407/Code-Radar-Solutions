#include <stdio.h>
int main(){
    int a,b,c;
    // bitwise or operator convert firstly the number into binary for eg=or a = 5 and b = 3:

//Binary of 5 → 0101
//Binary of 3 → 0011
//Bitwise OR (|) result → 0111 (which is 7 in decimal).
scanf("%d%d",&a ,&b);
c=a|b;
printf("%d",c);
return 0;
}