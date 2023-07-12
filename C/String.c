#include <stdio.h>

void printString(char arr[]);

int main()
{
    // char firstName[] = "Sudarshan";
    // char lastName[] = "Khandelwal";
    // printString(firstName);
    // printString(lastName);

    char str[100];
    // gets(str);
    // puts(str);

    fgets(str,100,stdin);
    puts(str);
    return 0;
}

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c ,", arr[i]);
    }
    printf("\n"); 
}