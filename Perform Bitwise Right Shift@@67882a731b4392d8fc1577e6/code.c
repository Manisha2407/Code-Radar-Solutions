#include <stdio.h>
int main()
{
    //num >> shift = num / (2^shift), rounding down if necessary.

    int num,shift,result;
    scanf("%d%d",&num ,&shift);
    result=num>>shift;//eg num is 32 and shift is 2 so 32/2*2(4)is 32/4 is equal to 8
    printf("%d",result);
    return 0;
}