#include <stdio.h>
int main(){
    //num << shift = to num * (2^shift)
    int num,shift,result;
    scanf("%d%d",&num ,&shift);
    result=num<<shift; //input number is 3 and shifted is 2 acc to formula 3*2power2 3*4=12
    printf("%d",result);
    return 0;
}