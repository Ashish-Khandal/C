#include<stdio.h>
#include<conio.h>

void main(){
    int n;
    int sum=0;
    printf("Enter your number :-");
    scanf("%d",&n);

    //! If use for loops then find error..
    //! Not excute..
    // for(int i=n;i>0;i--){
    //     n=n/10;
    //     sum=sum+1;
    // }
    //! use while loops 

    while (n>0)
    {
        n=n/10;
        sum=sum+1;
    }
    
    printf("Your number digit is:- %d",sum);
}