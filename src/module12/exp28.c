#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void display() {
    struct node *temp = front;
    
    if(front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    
    printf("Queue elements: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
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
    
    display();
    
    return 0;
}
