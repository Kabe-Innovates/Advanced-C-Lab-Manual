#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void pop() {
    struct node *temp;
    
    if(head == NULL) {
        printf("Stack is empty\n");
        return;
    }
    
    temp = head;
    printf("Popped element: %d\n", temp->data);
    head = head->next;
    free(temp);
}

int main() {
    int n, val;
    struct node *newnode;
    
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
    
    printf("Before pop:\n");
    struct node *p = head;
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
    
    pop();
    
    printf("After pop:\n");
    p = head;
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
    
    return 0;
}
