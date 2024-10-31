//A simple C program for a console-based calculator that can perform addition, subtraction, multiplication and division
#include<stdio.h>
int main()
{
    char operator;
    double num1,num2,result;
    //Display menu
    printf("Basic Calculator\n");
    printf("Choose an operator (+,-,*,/):");
    scanf("%c",&operator);
    //Input two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf",&num1,&num2);
    //Perform calculation based on the chosen operator
    switch(operator){
        case '+':
        result=num1+num2;
        printf("%.2lf + %.2lf = %.2lf\n",num1,num2,result);
        break;
        case '-':
        result=num1-num2;
        printf("%.2lf - %.2lf = %.2lf\n",num1,num2,result);
        break;
        case '*':
        result=num1*num2;
        printf("%.2lf * %.2lf = %.2lf\n",num1,num2,result);
        break;
        case '/':
        if(num2!=0){
            result=num1/num2;
            printf("%.2lf / %.2lf = %.2lf\n",num1,num2,result);
        }else{
            printf("Error! Division by zero is not allowed.\n");
        }
        break;
        default:
        printf("Error! Operator is not correct");
    }
    return 0;
}