#include<stdio.h>
void isPrime(int x){
    int flag=0;
    for(int i=2;i<n-1;i++){
        if(x%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("1");
    }
    else{
        printf("0");
    }
    return;
}
int main(){
    int t;
    scanf("%d",t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}