//Area of Circle
//Computes the area of a circle given its radius
#include<stdio.h>
int main(){
    float radius;
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);
    //Calculate the area of circle
    //area= pi*(radius)^2 ; where, pi= 3.14
    float area=3.14*radius*radius;
    printf("Area of Circle= %.2f",area);
    return 0; 
}