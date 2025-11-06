#include <stdio.h>

int max_of_four(int n1, int n2, int n3, int n4) {
    int max = n1;
    
    if(n2 > max) max = n2;
    if(n3 > max) max = n3;
    if(n4 > max) max = n4;
    
    return max;
}

int main() {
    int n1, n2, n3, n4, greater;
    
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    
    greater = max_of_four(n1, n2, n3, n4);
    
    printf("Greatest number: %d\n", greater);
    
    return 0;
}
