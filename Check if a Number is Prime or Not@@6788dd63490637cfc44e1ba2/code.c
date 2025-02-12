#include<stdio.h>
int main(){
    int n,i,k=1;
    scanf("%d",&n);
    if(n<=1){
        printf("Not Prime.");
    }
        for (i=2;i*i<=n;i++){
            if(n%i==0){
                k=0;
                break;     
        }
    }
    if(k){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}
    