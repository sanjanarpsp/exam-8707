#include <stdio.h>


int sumOfNumbers(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int start = 1;
    int end = 10;
    
    
    int result = sumOfNumbers(start, end);
    
   
    printf("The sum of numbers from %d to %d is: %d\n", start, end, result);
    
    return 0;
}