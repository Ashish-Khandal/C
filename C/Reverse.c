#include <stdio.h>
#include <conio.h>

void main(){
    int sum=0;
    int n ;
    printf("Enter your number :-");
    scanf("%d",&n);
    int reverse=n;
    while(n>0)
    {
        int r=n%10;
        sum=sum*10+r;
        n=n/10;

    }
    if(sum==reverse){
    printf("Your number %d reverse posible.",sum);
    }else{
        printf("Your number %d reverse not posible.",reverse);
    }
}