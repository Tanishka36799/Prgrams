#include <stdio.h>

int main() {
    int n = 5; 
    
    //Outer loop for each row
    for (int i = n; i > 0; i--) {
        
        // Inner loop 1 to print leading Spaces
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        
        // Inner loop 2 to print *
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
