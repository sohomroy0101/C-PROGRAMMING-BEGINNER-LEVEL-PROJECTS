//Even or Odd
//A simple C program that determines whether a number is Even or Odd
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:\t");
    scanf("%d",&num);
    if(num%2==0)
    printf("%d is a Even number",num);
    else
    printf("%d is a Odd number",num);
    return 0;
}