#include<stdio.h>
int isPrime(int x){
    int flag=0;
    for(int i=2;i<x-1;i++){
        if(x%i==0){
            flag=1;
            break;
        }
    }
    if(x==0){
        return 0;
    }
    if (x==1){
        return 0;
    }
     else if(flag==0){
        return 1;
    }
    else
    { return 0;
    }
    // else if(x == 0){
    //     return 0;
    // }
    // else if(x==1){
    //     return 0;
    // }
    else{
        return 0;
    }
}
