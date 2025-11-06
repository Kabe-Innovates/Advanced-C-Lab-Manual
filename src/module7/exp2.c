#include <stdio.h>

struct numbers {
    int a;
    int b;
};

int add(struct numbers n) {
    return n.a + n.b;
}

int main() {
    struct numbers n;
    
    printf("Enter value for a: ");
    scanf("%d", &n.a);
    printf("Enter value for b: ");
    scanf("%d", &n.b);
    
    int result = add(n);
    printf("Sum: %d\n", result);
    
    return 0;
}
