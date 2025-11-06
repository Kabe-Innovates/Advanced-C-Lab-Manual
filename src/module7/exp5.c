#include <stdio.h>
#include <stdlib.h>

struct subject {
    char name[50];
    int marks;
};

int main() {
    int n;
    struct subject *s;
    
    printf("Enter number of subjects: ");
    scanf("%d", &n);
    
    s = (struct subject *)malloc(n * sizeof(struct subject));
    if (s == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    
    for (int i = 0; i < n; i++) {
        printf("Enter subject %d name: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }
    
    printf("\nSubject Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Subject: %s, Marks: %d\n", s[i].name, s[i].marks);
    }
    
    free(s);
    
    return 0;
}
