 void fibonacciSeries(n){
       int a=0;
       int b=1;
       printf("%d",a);
       printf("%d",b);
    for(int i=0;i<=n-2;i++){
    int sum=a+b;
    a=b;
    b=sum;
    printf("%d ",sum);
    }
    return;
}