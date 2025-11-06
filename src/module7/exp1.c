#include <stdio.h>
#include <string.h>

struct eligible {
    int age;
    char n[50];
};

int main() {
    struct eligible e;
    
    printf("Enter name: ");
    scanf("%s", e.n);
    printf("Enter age: ");
    scanf("%d", &e.age);
    
    if (e.age <= 6) {
        printf("Vaccine Eligibility: No\n");
    } else {
        printf("Vaccine Eligibility: Yes\n");
    }
    
    printf("Name: %s\n", e.n);
    printf("Age: %d\n", e.age);
    
    return 0;
}
