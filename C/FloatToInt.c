// !Write a program that reads a floating point number and then displays the right-most digit of the integral part of the number.


#include <stdio.h>
#include <conio.h>

int main(){
    float x;
    printf("Enter the float number:- ");
    scanf("%f",&x);
     int new = x;
    printf("Your number is:-  %d",new);
}