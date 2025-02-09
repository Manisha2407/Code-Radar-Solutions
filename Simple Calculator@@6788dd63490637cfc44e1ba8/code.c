#include <stdio.h>
int main(){
    int a,b;
    char sign;
    scanf("%d %d %c",&a ,&b ,&sign);//there should be space in between %d %d %c 
    switch(sign){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        if(b !=0)
            printf("%d",a/b);
        else
            printf("error");// division by 0 should be zero
        break;
        default:
        printf("error");

    }
    return 0;
}