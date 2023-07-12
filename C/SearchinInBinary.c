#include <stdio.h>
#include <conio.h>
int main(){
    int beg=0,n,A[n],ITEM,end=n-1,mid=(beg+end)/2;
    printf("Enter your array size:-");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter your array element:-\n");
        scanf("%d",&n);
    }
    
    while (A[mid]!=ITEM && beg<=end)
    {
        if (ITEM<mid)
        {
            mid=end-1;
        }else{
            mid=beg+1;
        }
        mid=(beg+end)/2;
        if (A[mid]==ITEM)
        {
            printf("Your number are found!");
        }else{
             printf("Your number are not found!");
        }
        
    }
    return 0;
    
}