//! Program to find largest and smallest number from four given number.
#include<stdio.h>
#include<conio.h>
void main(){
   int minno,maxno,p,q,r,s;
   printf("enter any four numbers:");
   scanf("%d%d%d%d",&p,&q,&r,&s);
   minno=p;
   maxno=p;
   if(minno>q){ //checking 1st and 2nd number
      minno=q;
   }
   else if(maxno<q){
      maxno=q;
   }
   if(minno>r){ //checking 1st and 3rd number
      minno=r;
   }
   else if(maxno<r){
      maxno=r;
   }
   if(minno>s){ //checking 1st and 4th number
      minno=s;
   }
   else if(maxno<s){
      maxno=s;
   }
   printf("Largest number from the given 4 numbers is:%d",maxno);
   printf("\n");
   printf("Smallest numbers from the given 4 numbers is:%d",minno);
}