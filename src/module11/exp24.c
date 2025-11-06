#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    
    printf("Sum: %d\n", sum);
    
    return 0;
}
