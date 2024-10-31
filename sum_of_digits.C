//Sum of Digits
//Computes the sum of digits of a number
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: \t");
    scanf("%d",&num);
    int sum=0;
    while(num>0){
        int d=num%10;
        sum=sum+d;
        num=num/10;
    }
    printf("Sum of Digits= \t%d",sum);
    return 0;
}