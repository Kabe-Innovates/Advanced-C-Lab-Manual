#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void display() {
    struct node *p = head;
    
    if(p == NULL) {
        printf("Stack is empty\n");
        return;
    }
    
    printf("Stack elements: ");
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main() {
    int n, val;
    struct node *temp, *newnode;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &val);
        
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = val;
        newnode->next = head;
        head = newnode;
    }
    
    display();
    
    return 0;
}
