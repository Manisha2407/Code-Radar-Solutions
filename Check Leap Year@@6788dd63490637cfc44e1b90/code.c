#include <stdio.h>
int main(){
    //A year is a leap year if it is divisible by 400.
//OR it is divisible by 4 but NOT by 100.
//2000 % 400 == 0 → Leap Year ✅
//1600 % 400 == 0 → Leap Year ✅
//2nd Part: year % 4 == 0 && year % 100 != 0
//A year is a leap year if it is divisible by 4 but not divisible by 100.
//Example:
//2024 % 4 == 0 and 2024 % 100 != 0 → Leap Year ✅
//1900 % 4 == 0 but 1900 % 100 == 0 → Not a Leap Year ❌
    int year;
    scanf("%d",&year);
    if((year%400==0)||(year%4==0 && year%100!=0)){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}