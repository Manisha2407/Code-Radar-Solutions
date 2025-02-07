#include <stdio.h>
int main()
{
    //num >> shift = num / (2^shift), rounding down if necessary.

    int num,shift,result;
    scanf("%d%d",&num ,&shift);
    result=num>>shift;
    printf("%d",result);
    return 0;
}