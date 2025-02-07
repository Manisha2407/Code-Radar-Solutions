#include <stdio.h>
int main()
{
    //5 in binary: 101, 3 in binary: 011, so 101 ^ 011 = 110, which is 6 in decimal this is for XOR oprator
    int a,b,c;
    scanf("%d%d",&a ,&b);
    c=a^b;
    printf("%d",c);
    return 0;
}