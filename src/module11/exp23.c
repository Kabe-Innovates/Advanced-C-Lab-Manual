#include <stdio.h>
#include <stdlib.h>

int main() {
    int noshel, noque;
    int **shelarr;
    int *nobookarr;
    
    printf("Enter number of shelves: ");
    scanf("%d", &noshel);
    printf("Enter number of queries: ");
    scanf("%d", &noque);
    
    shelarr = (int **)malloc(noshel * sizeof(int *));
    nobookarr = (int *)malloc(noshel * sizeof(int));
    
    for(int i = 0; i < noshel; i++) {
        printf("Enter number of books on shelf %d: ", i);
        scanf("%d", &nobookarr[i]);
        shelarr[i] = (int *)malloc(nobookarr[i] * sizeof(int));
        
        for(int j = 0; j < nobookarr[i]; j++) {
            printf("Enter book %d: ", j);
            scanf("%d", &shelarr[i][j]);
        }
    }
    
    for(int i = 0; i < noque; i++) {
        int shelf, book;
        printf("Enter shelf and book query: ");
        scanf("%d %d", &shelf, &book);
        
        if(shelf < noshel && book < nobookarr[shelf]) {
            printf("Book: %d\n", shelarr[shelf][book]);
        } else {
            printf("Invalid query\n");
        }
    }
    
    for(int i = 0; i < noshel; i++) {
        free(shelarr[i]);
    }
    free(shelarr);
    free(nobookarr);
    
    return 0;
}
