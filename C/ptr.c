#include<stdio.h>
int main(){
    int x;
    int *ptr;
    int **pptr;
    ptr = &x;
    pptr = &ptr;
    *ptr = 10;
    //!-> *ptr += 5;
    **pptr = 20;
    //!-> *ptr += 5;
    *ptr += 5;
    **pptr += 25;
    (*ptr)++;
    printf("x=%d\n",x);
    printf("*ptr=%d\n",*ptr);
    printf("**pptr=%d\n",**pptr);
    printf("ptr=%u\n",ptr);
    printf("pptr=%u\n",pptr);

}