//Greatest of three numbers
//Determine the largest number among three numbers
#include<stdio.h>
int main(){
    int a;
    printf("Enter the first number:");
    scanf("%d",&a);
    int b;
    printf("Enter the second number:");
    scanf("%d",&b);
    int c;
    printf("Enter the third number:");
    scanf("%d",&c);
    //Find the largest number among three numbers
    if(a>b&&a>c){
        printf("%d first number is the largest number",a);
    }
    else if(b>a&&b>c){
        printf("%d second number is the largest number",b);
    }
    else {
        printf("%d third number is the largest number",c);
    }
    return 0;
}