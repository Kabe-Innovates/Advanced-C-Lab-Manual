#include <stdio.h>

void calculate_the_max(int n, int k) {
    int a = 0, o = 0, x = 0;
    
    for(int i = 1; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
            int and_val = i & j;
            int or_val = i | j;
            int xor_val = i ^ j;
            
            if(and_val < k && and_val > a) a = and_val;
            if(or_val < k && or_val > o) o = or_val;
            if(xor_val < k && xor_val > x) x = xor_val;
        }
    }
    
    printf("%d\n%d\n%d\n", a, o, x);
}

int main() {
    int n, k;
    
    printf("Enter n and k: ");
    scanf("%d %d", &n, &k);
    
    calculate_the_max(n, k);
    
    return 0;
}
