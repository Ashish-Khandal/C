//  !Given the values of the variables x, y and z, write a program to rotate their values such that x has the value of y, y has the value of z, and z has the value of x
   

#include <stdio.h>
#include <conio.h>

int main(){
    int x,y,z;
    printf("Enter x,y and z numbers:-  ");
    scanf("%d%d%d",&x,&y,&z);
    int new = x;
    x=y;
    y=z;
    z=new;
    printf("your numbers x,y and z :-  %d,%d,%d",x,y,z);


}