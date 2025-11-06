#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *p;
    char name[100];
    
    printf("Enter file name: ");
    scanf("%s", name);
    
    printf("File %s created successfully\n", name);
    
    p = fopen(name, "w");
    if (p == NULL) {
        printf("Error opening file\n");
        exit(1);
    }
    
    printf("File opened successfully\n");
    
    fclose(p);
    printf("File closed\n");
    
    return 0;
}
