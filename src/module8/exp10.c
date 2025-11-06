#include <stdio.h>

int square() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    return num * num;
}

int main() {
    int result = square();
    
    printf("Square: %d\n", result);
    
    return 0;
}
