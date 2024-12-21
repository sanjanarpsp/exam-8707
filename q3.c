#include <stdio.h>

int main() {
    int i = 100; 
    int j = 9;   
    do {
        printf("%d ", i); 
        printf("%d ", j); 
        i -= 10;          
        j -= 1;           
    } while (i >= 20 && j >= 1); 
    return 0;
}