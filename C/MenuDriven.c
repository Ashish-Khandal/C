// Menu driven program in C
#include <stdio.h>

// Driver code
int main() {
    // Choice variable
    int choice ;
    
    // Menu display
    printf("MENU:\n1. Coffee\n2. Tea\n3. Exit");
    
    // Infinite Loop for choice input
    while(1){
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        
        // If-else ladder
        switch(choice){
            case 1:
            printf("> Enjoy your Coffee!\n");
            break;
            case 2:
            printf("> Enjoy your Tea!\n");
            break;
            case 3:
            printf("Thanku!!!\n");
            break;
            default :
            printf("Invalid number.");
            // Termination of the Loop using break statement
            break;
        }
        if(choice==3){
            break;
        }
    }
    return 0;
}
