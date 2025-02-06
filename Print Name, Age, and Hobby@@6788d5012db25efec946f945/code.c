#include <stdio.h>
int main(){
    char str[100],str1[100];
    int a;
    scanf("%s%d%s",&str ,&a ,&str1);
    printf("Name: %s\n",str);
    printf("Age: %d\n",a);
    printf("Hobby: %s",str1);
    return 0;
}