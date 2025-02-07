#include <stdio.h>
#include <ctype.h>
int main(){
    char a;
    scanf("%d",&a);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'||a=='A'||a=='E'||a=='I'||a=='O' || a=='U'){
        printf("Vowel");
    }
    else if(isdigit(a)){
        printf("Digit");
    }
    else if(a>'a' && a<='z' || a>'A' && a<="Z"){
        printf("Consonant");
    }
    else{
        printf("Special Chracter")
    }
}