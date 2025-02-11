#include <stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++){//jitni rowa ha utne columns chaiye isliye j<=a
            if(i == 1||i == a||j == 1||j == a){ //isme jo input ha usi row and colnm ma star chaiye
                printf("*");//isliye equal to a bcz i keeps oon decreasing
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}