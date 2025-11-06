#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

int peek() {
    if(front == NULL) {
        printf("Queue is empty\n");
        return -1;
    }
    
    return front->data;
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
        newnode->next = NULL;
        
        if(front == NULL) {
            front = rear = newnode;
        } else {
            rear->next = newnode;
            rear = newnode;
        }
    }
    
    int front_val = peek();
    if(front_val != -1) {
        printf("Front element (peek): %d\n", front_val);
    }
    
    return 0;
}
