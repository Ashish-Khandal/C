#include <stdio.h>
#include <conio.h>

void main()
{
    int n, r;
    printf("Enter your number :-");
    scanf("%d",&n);
    int sum=0;
    while (n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("Sum of your numbers:- %d",sum);
}
    
    //! use in for loops:-
    // 
    //? author method...

    //     scanf("%d",&n);
    //     int sum=0;
    //     for(int i=n;i>0;i--){
    //          r=n%10;
    //         sum=sum+r;
    //         n=n/10;
    //     }
    //     printf("Sum of your numbers:- %d",sum);
    // }