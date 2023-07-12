#include<stdio.h>
#include<conio.h>

void main(){
    // int n,r,x;
    printf("Enter your three number digit:-");
    int n;
    scanf("%d",&n);
    int sum=0;
    int arm;
    arm=n;
    for(int i=n; i>0; i--){
        int r=n%10;
        int x=r*r*r;
        sum=sum+x;
        n=n/10;
    }

    //! use for while loops...

    // while (n>0)
    // {
    //     int r=n%10;
    //     int x=r*r*r;
    //     sum=sum+x;
    //     n=n/10;
    // }
    
    if(sum==arm){
        printf("your number is a Armstorng.");
    }else{
        printf("your number is not a Armstorng.");
    }
}