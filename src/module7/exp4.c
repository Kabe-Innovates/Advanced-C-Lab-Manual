#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *p;
    char name[100];
    char text[200];
    int num;
    
    printf("Enter file name: ");
    scanf("%s", name);
    printf("Enter number of strings: ");
    scanf("%d", &num);
    
    p = fopen(name, "w");
    if (p == NULL) {
        printf("Error opening file\n");
        exit(1);
    }
    
    printf("File opened successfully\n");
    
    getchar();
    for (int i = 0; i < num; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(text, sizeof(text), stdin);
        fputs(text, p);
    }
    
    fclose(p);
    printf("Data added successfully\n");
    
    return 0;
}
