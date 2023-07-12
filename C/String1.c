#include<stdio.h>
#include <string.h> 
void string1();
int main(){
    string1();
    return 0;
}
void string1(){
    char ch[20]={'K','h','a','n','d','a','l','w','a','l','\0'};    
   printf("Length of string is: %d",strlen(ch));    
 return 0;    
}