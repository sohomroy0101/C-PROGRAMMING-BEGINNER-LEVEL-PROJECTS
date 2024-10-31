//Leap Year Checker
//Checks if a given year is a leap year or not
#include<stdio.h>
int main(){
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    //Condition to check if the year is a leap year or not
    if((year%400==0)||((year%4==0)&&(year%100!=0)))
    printf("%d is a leap year",year);
    else
    printf("%d is not a leap year",year);
    return 0;

}