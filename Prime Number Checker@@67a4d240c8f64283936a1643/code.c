#include<stdio.h>
int isPrime(int x){
    int flag=0;
    for(int i=2;i<x-1;i++){
        if(x%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        return 1;
    }
    else{
        return 0;
    }
}
// int main() {
//     int t;
//     scanf("%d",t);
//     while(t--){
//         int num;
//         scanf("%d",&num);
//         printf("%d\n",isPrime(num));
//     }
//     return 0;
// }